#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

#define TRACK_SIZE 10
#define SECTOR_SIZE 10
#define READ_FLAG 1
#define WRITE_FLAG 2

#define REQUEST_QUEUE_SIZE 50

sem_t sem;

// row -> track
// row + col -> sector
volatile int track[TRACK_SIZE][SECTOR_SIZE] = {0};

typedef struct
{
    volatile int data;
    volatile int track;
    volatile int sector;
    volatile int op_flag;
} ReadOrWriteRequest;

volatile int front = 0;
volatile int rear = -1;
volatile int request_count = 0;
ReadOrWriteRequest requests_queue[REQUEST_QUEUE_SIZE] = {0};

int is_queue_full()
{
    return request_count == REQUEST_QUEUE_SIZE;
}

int is_queue_empty()
{
    return request_count == 0;
}

// FCFS (first-come, first-served)
void enqueue(ReadOrWriteRequest request)
{
    if (!is_queue_full())
    {
        rear = (rear + 1) % REQUEST_QUEUE_SIZE;
        ++request_count;
        requests_queue[rear] = request;
    }
    else
    {
        printf("Queue is full, cannot enqueue request.\n");
    }
}

ReadOrWriteRequest dequeue()
{
    ReadOrWriteRequest request = {-1, -1, -1, -1};
    if (!is_queue_empty())
    {
        request = requests_queue[front];
        front = (front + 1) % REQUEST_QUEUE_SIZE;
        --request_count;
    }
    return request;
}

ReadOrWriteRequest peek()
{
    ReadOrWriteRequest request = {-1, -1, -1, -1};
    if (!is_queue_empty())
    {
        request = requests_queue[front];
    }
    return request;
}

void *perform_readOrWrite(void *arg)
{
    int direction = 1; // 1 (right) or -1 (left)
    int pointer_current_track = 0;
    int pointer_current_sector = 0;

    while (1)
    {
        sem_wait(&sem);

        if (is_queue_empty())
        {
            sem_post(&sem);
            sleep(1); // Sleep to avoid busy-waiting
            continue;
        }

        if (pointer_current_sector >= SECTOR_SIZE)
        {
            pointer_current_sector = 0;
            pointer_current_track += direction;
        }

        if (pointer_current_track >= TRACK_SIZE || pointer_current_track < 0)
        {
            direction *= -1;
            pointer_current_track += direction;
        }

        ReadOrWriteRequest request = peek();
        if (request.track == pointer_current_track && request.sector == pointer_current_sector)
        {
            dequeue(); // Dequeue only when the correct sector/track is reached
            if (request.op_flag == READ_FLAG)
            {
                printf("CONTROLLER: Reading from Track: %d, Sector: %d, Data: %d\n", request.track, request.sector, track[request.track][request.sector]);
            }
            else if (request.op_flag == WRITE_FLAG)
            {
                track[request.track][request.sector] = request.data;
                printf("CONTROLLER: Writing to Track: %d, Sector: %d, Data: %d\n", request.track, request.sector, request.data);
            }
            printf("-> direction = %s\n", direction == 1 ? "positive" : "negative");
        }

        ++pointer_current_sector;

        sem_post(&sem);
        // sleep(1);
    }

    return NULL;
}

void *request_readOrWrite(void *arg)
{
    srand(time(0));
    while (1)
    {
        sem_wait(&sem);
        if (!is_queue_full())
        {
            //int data = rand() % 1000 + 100; // 100 to 1099
            int track = rand() % TRACK_SIZE;
            int sector = rand() % SECTOR_SIZE;
            int op_flag = rand() % 2 + 1; // 1 to 2
		 int data = op_flag == READ_FLAG ? -1 :  rand() % 1000 + 100;

            ReadOrWriteRequest request = {data, track, sector, op_flag};

            enqueue(request);
            printf("OS: New request enqueued: Data=%d, Track=%d, Sector=%d, OpFlag=%d(%s)\n", data, track, sector, op_flag, (op_flag == READ_FLAG ? "READ" : "WRITE"));
        }
        else
        {
            printf("OS: Request queue is full, cannot enqueue.\n");
        }
        sem_post(&sem);

        sleep(1);
    }

    return NULL;
}

// gcc -o scan scan.c && ./scan
int main()
{
    sem_init(&sem, 0, 1);
    pthread_t hdd_controller, os_interface;

    pthread_create(&hdd_controller, NULL, perform_readOrWrite, NULL);
    pthread_create(&os_interface, NULL, request_readOrWrite, NULL);

    pthread_join(hdd_controller, NULL);
    pthread_join(os_interface, NULL);

    sem_destroy(&sem);
    return 0;
}
