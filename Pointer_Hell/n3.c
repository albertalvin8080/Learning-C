#include <stdio.h>
#include <stdlib.h>

int fun() { return 999; }

int main()
{
    // int (*y)() = &fun;

    // `y` is an array of pointers to functions which return an integer.
    int (*y[])() = {&fun};

    // `x` is a pointer to an array of pointers which point to a function which returns an integer.
    int (*(*x)[])() = &y;

    // 1. dereference x 
    // 2. take the first function pointer
    // 3. call the function using the pointer.
    int n = (*x)[0]();
    // int n = (*(*x)[0])(); // Optional: dereference the function pointer before call.

    printf("%i\n", n);

    return 0;
}