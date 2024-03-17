#include <stdio.h>

int soma(int n);

int main()
{
	int n;
    printf("Insira um numero maior que 0: ");
    scanf("%d",&n);
	
	printf("Soma dos numeros ateh %d: %d",n,soma(n));
	
    return 0;
}

int soma(int n){
	if(n==1){
		return 1;
	}else{
		return n + soma(n-1);
	}
}
