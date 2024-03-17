#include <stdio.h>

int main()
{
    int a,b,*aP=&a,*bP=&b;
    
    printf("%x %s %x\n",aP,aP>bP?">":"<",bP);

    return 0;
}

