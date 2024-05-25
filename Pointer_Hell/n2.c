#include <stdio.h>
#include <stdlib.h>

// `fun` returns a pointer to an array of 20 integers.
int (*fun())[20]
{
    // `arr` is a pointer which points to an array of 20 integers.
    // `arr` stores the address of the beginning of the array. When you access *arr, you are accessing the array of 20 integers starting at that memory location.
    int (*arr)[20] = malloc(sizeof(int) * 20);
    (*arr)[0] = 1;

    printf("&arr      : %p\n", (void *)&arr);
    printf("arr       : %p\n", (void *)arr);
    printf("*arr      : %p\n", (void *)(*arr)); // Since arr[0] is a pointer to the first integer, &arr[0] is the same as arr.
    printf("arr[0]    : %p\n", (void *)arr[0]); // Gives the memory address of the first element because a pointer to an array is technically a pointer to a pointer.
    printf("&arr[0]   : %p\n", (void *)&arr[0]);
    printf("*&*&arr[0]: %p\n", (void *)*&*&arr[0]); // *&*&arr[0] simply evaluates to arr[0] because dereferencing (*) and referencing (&) cancel each other out.
    printf("(*arr)[0] : %i\n", (*arr)[0]);

    return arr;
}

int main()
{
    // `x` is a pointer to a function which returns a pointer to an array of 20 integers.
    int(*(*x)())[20] = &fun;

    /*
     * The dereferencing operator * is optional in this context due to how function pointers are treated in C.
     * x(); and (*x)(); are both correct.
     */
    // x();

    // 1. call x() 
    // 2. deference the pointer to the array
    // 3. take the first element of the array.
    int n = (*x())[0];
    // int n = (*(*x)())[0]; // Also correct.

    printf("%i\n", n);

    return 0;
}