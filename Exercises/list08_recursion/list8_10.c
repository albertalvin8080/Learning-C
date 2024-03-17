#include <stdio.h>

void decrescente(int n);

int main()
{
	int n;
    printf("Insira um numero PAR: ");
    scanf("%d",&n);
    
	if(n%2!=0){
		printf("EU DISSE PAR.");
		return 1;
	}
	
	decrescente(n);
	
    return 0;
}

void decrescente(int n){
	if(n==0){
		printf("%d ",n);
	}else{
		printf("%d ",n);
		decrescente(n-2);
	}
}
