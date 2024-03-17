#include <stdio.h>
void maior(int *ap,int *bp);

int main()
{
	int a,b;
    printf("Insira A e B: ");
    scanf("%d%d",&a,&b);
    maior(&a,&b);
    printf("A: %d\nb: %d",a,b);

    return 0;
}
void maior(int *ap,int *bp){
	int aux=*ap;
	if(*ap<*bp){
		*ap=*bp;
		*bp=aux;
	}
}
