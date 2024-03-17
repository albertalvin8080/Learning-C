#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int codIdent;
	char nome[50];
	int qtEstoque;
	float preco;
}Produtos;

void maiorPreco(Produtos info[],int N);
void lerProdutos(Produtos info[],int N);
void maiorEstoque(Produtos info[],int N);

int main()
{
	int N;
    printf("Insira a quantidade de produtos: ");
    scanf("%d",&N);
    
    Produtos *info = (Produtos*) calloc(N,sizeof(Produtos));
    
    lerProdutos(info,N);
    maiorPreco(info,N);
    maiorEstoque(info,N);
    
    free(info);

    return 0;
}
void maiorEstoque(Produtos info[],int N){
	int maiorE=-1,posicao;
	
	for(int i=0;i<N;i++){
		if(info[i].qtEstoque>maiorE){
			maiorE = info[i].qtEstoque;
			posicao = i;
		}
	}
	
	printf("\n---Produto com maior Estoque---\n");
	printf("Nome: %s\n",info[posicao].nome);
	printf("Codigo de Ident.: %d\n",info[posicao].codIdent);
	printf("Quant. no estoque: %d\n",info[posicao].qtEstoque);
	printf("Preco: %.2f\n",info[posicao].preco);
}
void maiorPreco(Produtos info[],int N){
	int posicao;
	float maiorP=-1;
	
	for(int i=0;i<N;i++){
		if(info[i].preco>maiorP){
			maiorP = info[i].preco;
			posicao = i;
		}
	}
	
	printf("\n---Produto com maior Preco---\n");
	printf("Nome: %s\n",info[posicao].nome);
	printf("Codigo de Ident.: %d\n",info[posicao].codIdent);
	printf("Quant. no estoque: %d\n",info[posicao].qtEstoque);
	printf("Preco: %.2f\n",info[posicao].preco);
}
void lerProdutos(Produtos info[],int N){
	for(int i=0;i<N;i++){
		printf("\n|Produto %d|\n",i+1);
		printf("Insira o nome: ");
			scanf("%*c%50[^\n]%*c",info[i].nome);
		printf("Codigo de Ident.: ");
			scanf("%d",&info[i].codIdent);
		printf("Quant. no estoque: " );
			scanf("%d",&info[i].qtEstoque);
		printf("Preco: ");
			scanf("%f",&info[i].preco);
	}
}
