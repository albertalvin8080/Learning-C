#include <stdio.h>

void crescente(int n);

int main()
{
	int n;
    printf("Insira um numero positivo: ");
    scanf("%d",&n);
	
	crescente(n);
	
    return 0;
}

void crescente(int n){
	if(n==0){
		printf("%d ",n);
	}else{
		crescente(n-1);
		printf("%d ",n);
	}
}
