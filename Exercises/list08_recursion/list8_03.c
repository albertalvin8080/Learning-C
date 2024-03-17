#include <stdio.h>

int cubos(int n);

int main()
{
	int n;
    printf("Insira um numero maior que 0: ");
    scanf("%d",&n);

	printf("A soma dos %d primeiros cubos eh: %d",n,cubos(n));
	
    return 0;
}

int cubos(int n){
	if(n == 1){
		return n*n*n;
	}else{
		return n*n*n + cubos(n-1);
	}
}
