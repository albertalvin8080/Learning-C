#include <stdio.h>

int fatorial(int n);

int main()
{
	int n;
    printf("Insira um numero maior ou igual a zero: ");
    scanf("%d",&n);
	
	printf("Fatorial de %d: %d",n,fatorial(n));
	
    return 0;
}

int fatorial(int n){
	if(n==0 || n==1){
		return 1;
	}else{
		return n * fatorial(n-1);
	}
}
