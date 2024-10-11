#include <stdio.h>
#include <stdlib.h>
#include "fun.h"

int main(int argc, char *argv[])
{
    if(argc < 3)
    {
        printf("USAGE: ./program arg1 arg2");
        exit(EXIT_FAILURE);
    }

    int r = fun(atoi(argv[1]), atoi(argv[2]));
    printf("%d\n", r);
    return 0;
}