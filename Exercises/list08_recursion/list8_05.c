#include <stdio.h>

int fibonacci(int n);

int main()
{
	int n;
    printf("Insira o enesimo dumero de fibonacci: ");
    scanf("%d",&n);

	printf("O %do termo eh: %d",n,fibonacci(n));

    return 0;
}

int fibonacci(int n){
	if(n==1){
		return 0;
	}else if(n==2){
		return 1;
	}else{
		return fibonacci(n-1) + fibonacci(n-2);
	}
}
