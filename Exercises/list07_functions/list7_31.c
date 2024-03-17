#include <stdio.h>
double neperiano(int n);
int fatorial(int f);

int main()
{
	int n;
    printf("Insira o 'n' da serie neperiana: ");
    scanf("%d",&n);
    
    double resul = neperiano(n);
    printf("Resultado da serie com (n=%d): %.20lf",n,resul);

    return 0;
}
double neperiano(int n){
	int i;
	double soma=0;
	for(i=0;i<=n;i++){
		soma += (double) 1.0 / fatorial(i);
	}return soma;
}
int fatorial(int f){
	if(f==0){
		return 1;
	}
	int fat=1;
	for(int j=1;j<=f;j++){
		fat*=j;
	}return fat;
}
