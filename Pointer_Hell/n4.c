#include <stdlib.h>
#include <stdio.h>

char *(*fun())[] {
    // `arr` is a pointer to an array of pointers to char
    char *(*arr)[1] = malloc(sizeof(char*) * 1); // the array doesn't have any pointers yet
    (*arr)[0] = malloc(sizeof(char) * 1);  // now it has a single pointer
    *(*arr)[0] = 'w';

    printf("%lu\n", sizeof(char));
    printf("%lu\n", sizeof(char*));
    printf("&arr      : %p\n", (void*) &arr);
    printf("arr       : %p\n", (void*) arr);
    printf("arr[0]    : %p\n", (void*) arr[0]);
    printf("*arr      : %p\n", (void*) *arr); // address OF the internal pointer
    printf("(*arr)[0] : %p\n", (void*) (*arr)[0]); // addres INSIDE the internal pointer (of 'w')
    printf("*(*arr)[0]: %c\n", *(*arr) [0]);

    return arr;
}

int main() {
    // `x` is an array of 8-length-array of pointers to functions which return each a pointer to an array of pointers of char
    char *(*(*x[][8])())[] = { {&fun} };
    // x[0][0]();

    // 1. index the array
    // 2. index the 8-length-array
    // 3. call the function
    // 4. dereference the returned pointer
    // 5. index the first element of the array (a pointer)
    // 6. dereference the pointer
    char n = *(*(x[0][0]()))[0];
    printf("n: %c\n", n);

    return 0;
}