#include <stdio.h>
#include <stdlib.h>

void inserir(int p[],int tam);
void consultar(int p[],int tam);

int main()
{
	int by;
    printf("Insira quantos bytes serao alocados (do tipo int): ");
    scanf("%d",&by); //tamanho do array
    
    int *p = (int*)calloc(by,sizeof(int));
    
    int op;
    do{
    	printf("\nVoce quer:\n\t***'0' fecha o programa***\n\t");
		printf("(1) Inserir um valor em uma posicao\n\t");
		printf("(2) Consultar valor de uma posicao\n\t");
		scanf("%d",&op);
		
		switch(op){
			case 0:
				printf("---Programa encerrado---");
				break;
			case 1:
				inserir(p,by);
				break;
			case 2:
				consultar(p,by);
				break;
		}
		
	}while(op!=0);
	
	
    return 0;
}
void consultar(int p[],int tam){
	int aux=0,posicao;
	
	while(aux==0){
		printf("Insira uma posicao (0 a %d): ",tam-1);
		scanf("%d",&posicao);
		aux=1;
		
		if(posicao>=tam){
			printf("Posicao invalida. ");
			aux=0;
		}
	}
	
	//mostra valor
	printf("p%d = %d\n",posicao,p[posicao]);
}
void inserir(int p[],int tam){
	int aux=0,posicao;
	
	while(aux==0){
		printf("Insira uma posicao (0 a %d): ",tam-1);
		scanf("%d",&posicao);
		aux=1;
		
		if(posicao>=tam){
			printf("Posicao invalida. ");
			aux=0;
		}
	}
	
	//insere valor
	printf("Agora o valor: ");
	scanf("%d",&p[posicao]);
}
