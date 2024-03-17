#include <stdio.h>
int soma(int n);

int main()
{
    int n;
    printf("Insira um numero: ");
    scanf("%d",&n);
    
    int resul=soma(n);
    printf("Soma dos numeros ateh %d = %d",n,resul);

    return 0;
}
int soma(int n){
	int i,soma=0;
	for(i=1;i<=n;i++){
		soma+=i;
	}
	return soma;
}
