#include <stdio.h>

void soma(int *pA,int *pB);

int main()
{
    int A = 3, B = 7;
    
    printf("Antes:\nA = %d\nB = %d\n",A,B);
    
    soma(&A,&B);
    
    printf("\nDepois:\nA = %d\nB = %d",A,B);
    
    return 0;
}
void soma(int *pA,int *pB){
	*pA += *pB;
}
