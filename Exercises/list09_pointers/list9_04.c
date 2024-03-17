#include <stdio.h>

void troca(int *ap,int *bp);

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    troca(&a,&b);
    printf("a = %d\nb = %d",a,b);

    return 0;
}
void troca(int *ap,int *bp){
	int aux=*ap;
	*ap=*bp;
	*bp=aux;
}
