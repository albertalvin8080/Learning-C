#include <stdio.h>
int somad(int *ap,int *bp);

int main()
{
	int a,b;
    printf("Insira A e B: ");
    scanf("%d%d",&a,&b);
    printf("Soma = %d",somad(&a,&b));

    return 0;
}
int somad(int *ap,int *bp){
	*ap*=2;
	*bp*=2;
	int soma=*ap+*bp;
	return soma;
}
