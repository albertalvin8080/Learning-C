#include <stdio.h>

float serie(float n);

int main()
{
	float n;
    printf("Insira um numero POSITIVO: ");
    scanf("%f",&n);
	
	printf("Serie S(%.f) = %.2f",n,serie(n));
	
    return 0;
}

float serie(float n){
	if(n==0){
		return 0;
	}else{
		return (1+n*n)/n + serie(n-1);
	}
}
