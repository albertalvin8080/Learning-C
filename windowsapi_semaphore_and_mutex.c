#include <stdio.h>
#include <windows.h>

#define NUM_THREADS 5

/*
    Some useful information:
    - HANDLE   => typedef void              *HANDLE;
    - DWORD    => typedef unsigned long     DWORD;
    - INFINITE => #define INFINITE          0xFFFFFFFF

    - intptr_t => typedef __int64           intptr_t;
        (The type intptr_t is an integer type that is guaranteed to be the 
        same size as a pointer. This is necessary because pointers and integers 
        can have different sizes depending on the architecture (32-bit vs. 64-bit). 
        The intptr_t type ensures that the conversion is safe and portable across 
        different architectures.)

    - far      => #define far
        (The far keyword is an old memory model modifier used in 16-bit DOS 
        programming to specify that a pointer is a "far pointer," allowing it to 
        address memory outside the current segment.)

    - LPVOID   => typedef void far          *LPVOID;
        (It's a pointer to any type.)

    - WINAPI   => #define WINAPI            __stdcall
        (__stdcall is a name mangling convention for windows api functions.
        Functions using __stdcall have their names decorated (mangled) by the compiler.
        For instance, the function void func() might be decorated as _func@X, where X is
        the number of bytes of arguments passed to the function.)
*/

HANDLE hMutex;
HANDLE hSemaphore;

// DWORD is just an unsigned long
DWORD WINAPI ThreadFunction(LPVOID lpParam)
{
    // Thread ID
    DWORD threadId = (DWORD)(intptr_t)lpParam;
    printf("Thread %d tentando adquirir o mutex...\n", threadId);

    // Tentativa de aquisição do mutex
    WaitForSingleObject(hMutex, INFINITE);
    printf("Thread %d adquiriu o mutex.\n", threadId);

    // Simula trabalho na seção crítica
    Sleep(1000);

    // Libera o mutex
    ReleaseMutex(hMutex);
    printf("Thread %d liberou o mutex.\n", threadId);

    // Tentativa de aquisição do semáforo
    WaitForSingleObject(hSemaphore, INFINITE);
    printf("Thread %d adquiriu o semáforo.\n", threadId);

    // Simula trabalho após aquisição do semáforo
    Sleep(1000);

    // Libera o semáforo
    ReleaseSemaphore(hSemaphore, 1, NULL);
    printf("Thread %d liberou o semáforo.\n", threadId);

    return 0;
}

int main()
{
    hMutex = CreateMutex(NULL, FALSE, NULL);
    if (hMutex == NULL)
    {
        printf("CreateMutex falhou (%d)\n", GetLastError());
        return 1;
    }

    /*
    // Binary semaphore:
    HANDLE hSemaphore = CreateSemaphore(
        NULL,   // Default security attributes
        1,      // Initial count (0 for unavailable, 1 for available)
        1,      // Maximum count (must be 1 for binary semaphore)
        NULL    // Unnamed semaphore
    );
    */
    hSemaphore = CreateSemaphore(NULL, 2, 2, NULL);
    if (hSemaphore == NULL)
    {
        printf("CreateSemaphore falhou (%d)\n", GetLastError());
        CloseHandle(hMutex);
        return 1;
    }

    HANDLE threads[NUM_THREADS];
    DWORD threadId;
    for (int i = 0; i < NUM_THREADS; i++)
    {
        threads[i] = CreateThread(
            NULL,
            0,
            ThreadFunction,
            (LPVOID)(intptr_t)i,
            0,
            &threadId);

        if (threads[i] == NULL)
        {
            printf("CreateThread falhou (%d)\n", GetLastError());
            CloseHandle(hMutex);
            CloseHandle(hSemaphore);
            return 1;
        }
    }

    // Aguardar todas as threads terminarem
    WaitForMultipleObjects(NUM_THREADS, threads, TRUE, INFINITE);

    // Fechar handles
    for (int i = 0; i < NUM_THREADS; i++)
    {
        CloseHandle(threads[i]);
    }
    CloseHandle(hMutex);
    CloseHandle(hSemaphore);

    return 0;
}
