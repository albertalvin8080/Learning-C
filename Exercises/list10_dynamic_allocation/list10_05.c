#include <stdio.h>
#include <stdlib.h>

void multiplos(int p[],int N,int X);

int main()
{
	int N;
    printf("Insira o tamanho do vetor: ");
    scanf("%d",&N);
	
	int *p = (int*) calloc(N,sizeof(int));
	
	for(int i=0;i<N;i++){
		printf("Insira o valor de p%d: ",i);
		scanf("%d",&*p+i); //funcionou sem parenteses
	}
	
	int X;
	printf("Agora, insira um numero X: ");
	scanf("%d",&X);
	
	multiplos(p,N,X);
	
    return 0;
}
void multiplos(int p[],int N,int X){
	int cont=0;
	printf("\nOs multiplos de %d do vetor sao: ",X);
	
	for(int i=0;i<N;i++){
		if(p[i]%X==0){
			cont++;
			printf("%d ",p[i]);
		}
	}
	
	printf("\nQuantidade de numeros = %d",cont);
}

