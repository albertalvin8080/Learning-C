#include <stdio.h>

void decrescente(int n);

int main()
{
	int n;
    printf("Insira um numero positivo: ");
    scanf("%d",&n);
	
	decrescente(n);
	
    return 0;
}

void decrescente(int n){
	if(n==0){
		printf("%d ",n);
	}else{
		printf("%d ",n);
		decrescente(n-1);
	}
}
