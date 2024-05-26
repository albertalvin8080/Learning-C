#include <stdlib.h>
#include <stdio.h>

char *fun()
{
    printf("Inside fun()\n");
    char *c = (char*) malloc(sizeof(char));
    *c = 'w';
    return c;
}

// returning a pointer to the array of function pointers because you cannot return an array directly
char *(*(*fun2())[])()
{
    printf("Inside fun2()\n");
    // char *(**ptr)() = malloc(sizeof(char *(*)()));
    static char *(*ptr[1])() = {&fun};
    return &ptr;
}

int main()
{
    // char *(*y[1])() = *fun2(); // test: failure
    // char *(*(**y)[])() = fun2(); // test: success
    char *(*(*(*y)())[])() = &fun2;
    char *(*(*(**z)())[])() = &y;

    // Just remember that if you omit the size of **x[], you need to provide at least an empy array.
    char *(*(*(**x[])())[])() = {z};
    
    char n = *(*(*(**x[0])())[0])();
    printf("n = %c\n", n);

    return 0;
}