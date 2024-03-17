#include <stdio.h>
int expoFat(int n);
int potencia(int resul,int i);

int main()
{
    int n;
    printf("Insira um numero: ");
    scanf("%d",&n);
    
    int retorno = expoFat(n);
    printf("Fatorial Exponencial = %d",retorno);

    return 0;
}
int expoFat(int n){
	int i,resul=2;
	for(i=3;i<=n;i++){
		resul = potencia(resul,i);
	}return resul;
}
int potencia(int resul,int i){
	int j,pot=1;
	for(j=1;j<=resul;j++){
		pot*=i;
	}return pot;
}
