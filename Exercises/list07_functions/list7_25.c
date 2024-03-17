#include <stdio.h>
float serie(int n);

int main()
{
	int n;
    printf("Digite o valor de N: ");
    scanf("%d",&n);
    
    float resul = serie(n);
    printf("Resultado da serie = %f",resul);

    return 0;
}
float serie(int n){
	int i;
	float soma=0;
	
	for(i=1;i<=n;i++){
		soma += (float)(i*i+1)/(i+3);
	}
	return soma;
}
