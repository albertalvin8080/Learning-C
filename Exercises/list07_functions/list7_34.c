#include <stdio.h>
int fatorialDuplo(int n);

int main()
{
	int n=2;;
	while(n%2==0 || n>21 || n<1){
	    printf("Insira um numero impar de 1 ateh 21: ");
	    scanf("%d",&n);
		if(n%2==0 || n>21 || n<1){
			printf("Numero invalido. ");
		}
	}
	
	int retorno = fatorialDuplo(n);
	printf("Fatorial duplo de %d!! = %d",n,retorno);

    return 0;
}
int fatorialDuplo(int n){
	int i,fat=1;
	for(i=1;i<=n;i+=2){
		fat*=i;	
	}return fat;
}
