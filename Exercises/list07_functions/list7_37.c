#include <stdio.h>
int hiperfat(int x);
int potencia(int y);

int main()
{
	int n;
    printf("Insira um numero: ");
    scanf("%d",&n);
    
    int retorno = hiperfat(n);
    printf("Hiperfatorial de %d = %d",n,retorno);

    return 0;
}
int hiperfat(int x){
	int i,fat=1;
	for(i=1;i<=x;i++){
		fat*=potencia(i);
	}return fat;
}
int potencia(int y){
	int j,pot=1;
	for(j=1;j<=y;j++){
		pot*=y;
	}return pot;
}
