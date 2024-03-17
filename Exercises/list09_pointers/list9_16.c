#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, *B=&A, **C=&B, ***D=&C;
    printf("Insira um valor: ");
    scanf("%d",&A);
    
    printf("Dobro: %d\n",*B*2);
	printf("Triplo: %d\n",**C*3);
	printf("Quadruplo: %d\n",***D*4);
	
    return 0;
}

