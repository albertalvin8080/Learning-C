#include <stdio.h>
void soma(int *ap,int *bp);

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    soma(&a,&b);
    printf("A: %d\nB: %d",a,b);
    
    return 0;
}
void soma(int *ap,int *bp){
	*ap+=*bp;
}
