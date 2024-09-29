#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARR_SIZE 10

void quicksort(int *arr, int start, int end)
{
    // start == end -> one element array
    // strat > end  -> empty array
    if (start >= end)
        return; // sorted

    int pivot = arr[end];
    int i = start;
    int j = end - 1;

    /*
    The loop should continue as long as i is less than or equal to j, because
    at this point, there might still be elements on the left that need to go
    to the right (or vice versa), especially when i equals j (the element i+1)
    might need to change places with the pivot
    */
    while (i <= j)
    {
        // Move i right until you find an element >= pivot
        while (i <= j && arr[i] < pivot)
            ++i;

        // Move j left until you find an element < pivot
        while (i <= j && arr[j] >= pivot)
            --j;

        if (i < j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    arr[end] = arr[i];
    arr[i] = pivot;

    quicksort(arr, start, i - 1);
    quicksort(arr, i + 1, end);
}

void print_arr(int *arr)
{
    printf("->> ");
    for (int i = 0; i < ARR_SIZE; ++i)
        printf("%d, ", arr[i]);
    printf("\n");
}

int main()
{
    srand(time(0));
    int arr[ARR_SIZE];
    for (int i = 0; i < ARR_SIZE; ++i)
        arr[i] = rand() % 100; // 0 to 99

    print_arr(arr);
    quicksort(arr, 0, ARR_SIZE - 1);
    print_arr(arr);

    return 0;
}