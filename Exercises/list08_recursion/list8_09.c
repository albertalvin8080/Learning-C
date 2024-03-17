#include <stdio.h>

void crescente(int n);

int main()
{
	int n;
    printf("Insira um numero PAR: ");
    scanf("%d",&n);
	if(n%2!=0){
		printf("EU DISSE PAR.");
		return 1;
	}
	crescente(n);
	
    return 0;
}

void crescente(int n){
	if(n==0){
		printf("%d ",n);
	}else{
		crescente(n-2);
		printf("%d ",n);
	}
}
