#include <stdio.h>
int soma(int x, int y);

int main()
{
	int a,b,maior,menor;
    printf("Insira um numero: ");
	scanf("%d",&a);
	printf("Insira OUTRO numero: ");
	scanf("%d",&b);
	
	if(a>b){
		maior=a;
		menor=b;
	}
	else if(a<b){
		maior=b;
		menor=a;
	}
	else if(a==b){
		printf("NAO PODEM SER NUMEROS IGUAIS");
		return 0;
	}
	int s=soma(maior,menor);
	printf("Soma dos numeros entre eles = %d",s);
	
    return 0;
}
int soma(int x, int y){
	int soma=0,i;
	
	for(i=y+1;i<x;i++){
		soma+=i;
	}
	return soma;
}
