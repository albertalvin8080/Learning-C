#include <stdio.h>

char fun() { return 'd'; }

int main()
{
    char (*x)() = &fun;

    printf("%c\n", x());
    return 0;
}

// gcc n1.c && ./a.out