#include <stdlib.h>
#include <stdio.h>

#define ARR_SIZE 100

int binary_search(int *arr, int size, int target)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
            return mid;
        if (arr[mid] > target)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int recursive_binary_search(int *arr, int start, int end, int target)
{
    if (start > end)
        return -1; // Not found;

    int mid = (start + end) / 2;
    if (arr[mid] == target)
        return mid;

    if (arr[mid] > target)
        return recursive_binary_search(arr, start, mid - 1, target);
    else
        return recursive_binary_search(arr, mid + 1, end, target);
}

int main()
{
    int arr[ARR_SIZE];
    for (int i = 0; i < ARR_SIZE; ++i)
        arr[i] = i + 1;

    // int p = binary_search(arr, ARR_SIZE, 10); // arr[9]
    // int p = binary_search(arr, ARR_SIZE, 100); // arr[99]
    // int p = binary_search(arr, ARR_SIZE, 101); // -1

    printf("binary search(10): %d\n", binary_search(arr, ARR_SIZE, 10));
    printf("binary search(111): %d\n", binary_search(arr, ARR_SIZE, 111));

    printf("recursive binary search(10): %d\n", recursive_binary_search(arr, 0, ARR_SIZE - 1, 10));
    printf("recursive binary search(111): %d\n", recursive_binary_search(arr, 0, ARR_SIZE - 1, 111));

    return 0;
}