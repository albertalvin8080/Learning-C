#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	int codigo;
	int quantidade;
	char descricao[40];
}Mercadoria;

void limparARQ(void);
void limparBuffer(void);
int retirarProd(Mercadoria *info);
void inserirProd(Mercadoria *info);
void relatorioGeral(Mercadoria *info);
void produtosSemEstoque(Mercadoria *info);

int main()
{
	Mercadoria *info = (Mercadoria*) calloc(1,sizeof(Mercadoria));
	limparARQ();
	
	int op;
    
    do{
    	printf("Escolha:\n");
    	printf("\t1 - Relatorio Geral\n");
    	printf("\t2 - Inserir Mercadoria\n");
    	printf("\t3 - Retirar Mercadoria\n");
    	printf("\t4 - Produtos Sem Estoque\n");
    	printf("\t0 - Finalizar Programa\n\t?");
    		scanf("%d",&op);
    	printf("\n");
    	
    	switch(op){
    		case 1:
    			relatorioGeral(info);
    			break;
    		case 2:
    			inserirProd(info);
    			break;
    		case 3:
    			retirarProd(info);
    			break;
    		case 4:
    			produtosSemEstoque(info);
    			break;
    		case 0:
    			printf("\n--Programa Encerrado--");
    			break;
    		
    		default:
    			printf("OPCAO INVALIDA.\n");
		}
		
    	printf("\n");
    	
	}while(op!=0);

    return 0;
}
void produtosSemEstoque(Mercadoria *info){
	FILE *f;
	f = fopen("mercadorias.dat","rb");
		
	if(f==NULL){
		printf("*Falha ao analisar estoque.");
		exit(1);
	}
	
	int flag=0;
	while( fread(info,sizeof(Mercadoria),1,f) ){
		if(info->quantidade == 0){
			printf("-Codigo: %d\n",info->codigo);
			printf("-Quantidade: %d\n",info->quantidade);
			printf("-Descricao: %s\n",info->descricao);
			flag++;
		}
	}
	
	if(flag==0){
		printf("NAO EXISTEM PRODUTOS SEM ESTOQUE\n");
	}else{
		printf("\nQuantidade Total de produtos sem estoque: %d\n",flag);
	}
	
	fclose(f);
}
void relatorioGeral(Mercadoria *info){
	FILE *f;
	f = fopen("mercadorias.dat","rb");
		
	if(f==NULL){
		printf("*Falha ao gerar relatorio.");
		exit(1);
	}
	
	//confirmar existencia
	int flag=0,soma=0;
	while( fread(info,sizeof(Mercadoria),1,f) ){
		flag++;
	}
	
	if(flag!=0){
		rewind(f);
		printf("==========================\n");
		printf("Cod.\tDesc.\tQuant.\n");
		printf("==========================\n");
		while( fread(info,sizeof(Mercadoria),1,f) ){
		printf("%d\t%s\t%d\n",
				info->codigo,info->descricao,info->quantidade);
			soma += info->quantidade;
		}
		printf("==========================\n");
		printf("Quantidade Total de Produtos: %d\n",soma);
	}else{
		printf("SEM REGISTRO DE PRODUTOS\n");
	}
	
	fclose(f);
	
}
int retirarProd(Mercadoria *info){
	printf("Insira o codigo do produto que deseja retirar: ");
		scanf("%d",&info->codigo);
		limparBuffer();
	printf("Insira a quantidade: ");
		scanf("%d",&info->quantidade);
		limparBuffer();
	
	FILE *f,*f2;
	f = fopen("mercadorias.dat","rb");
	f2 = fopen("temporario.dat","wb");
		
	if(f==NULL){
		printf("*Falha ao remover produto.\n");
		exit(1);
	}if(f2==NULL){
		printf("*Falha ao remover produto.\n");
		exit(2);
	}
	
	//checar existencia do produto
	int flag=0;
	Mercadoria inf2;
	while( fread(&inf2,sizeof(Mercadoria),1,f) ){
		if(inf2.codigo == info->codigo){
			flag=1;
		}
	}
	
	if(flag!=0){
		rewind(f);
		while( fread(&inf2,sizeof(Mercadoria),1,f) ){
			if(inf2.codigo == info->codigo){
				if(inf2.quantidade == 0 ){
					printf("PRODUTO SEM ESTOQUE.\n");
					fclose(f);
					fclose(f2);
					return 0;
				}
				inf2.quantidade -= info->quantidade;
				if(inf2.quantidade<0){
					printf("QUANTIDADE INDISPONIVEL.\n");
					fclose(f);
					fclose(f2);
					return 0;
				}
				fwrite(&inf2,sizeof(Mercadoria),1,f2);
			}
			else{
				fwrite(&inf2,sizeof(Mercadoria),1,f2);
			}
		}
	}
	
	fclose(f);
	fclose(f2);
	
	if(flag==0){
		printf("PRODUTO NAO ENCONTRADO.\n");
	}else{
		remove("mercadorias.dat");
		rename("temporario.dat","mercadorias.dat");
		printf("QUANTIDADE REMOVIDA.\n");
	}
	
}
void inserirProd(Mercadoria *info){
	memset(info->descricao,0,40);
	
	printf("Insira o codigo do produto: ");
		scanf("%d",&info->codigo);
		limparBuffer();
	printf("Insira a quantidade: ");
		scanf("%d",&info->quantidade);
		limparBuffer();
	
	FILE *f,*f2;
	f = fopen("mercadorias.dat","rb+");
	f2 = fopen("temporario.dat","wb");
		
	if(f==NULL){
		printf("*Falha ao adicionar produto.\n");
		exit(1);
	}if(f2==NULL){
		printf("*Falha ao adicionar produto.\n");
		exit(2);
	}
	
	//checar existencia do produto
	int flag=0;
	Mercadoria inf2;
	while( fread(&inf2,sizeof(Mercadoria),1,f) ){
		if(inf2.codigo == info->codigo){
			flag=1;
		}
	}
	
	if(flag==0){
		printf("Insira descricao: ");
			scanf("%40[^\n]",info->descricao);
			limparBuffer();
			
		fwrite(info,sizeof(Mercadoria),1,f);
		printf("ITEM ADICIONADO.\n");
		
	}else{
		rewind(f);
		while( fread(&inf2,sizeof(Mercadoria),1,f) ){
			if(inf2.codigo == info->codigo){
				inf2.quantidade += info->quantidade;
				fwrite(&inf2,sizeof(Mercadoria),1,f2);
			}else{
				fwrite(&inf2,sizeof(Mercadoria),1,f2);
			}
		}
		printf("ESTOQUE INCREMENTADO.\n");
	}
	
	fclose(f);
	fclose(f2);
	
	if(flag!=0){
		remove("mercadorias.dat");
		rename("temporario.dat","mercadorias.dat");
	}
	
	//mini-teste
	/*f = fopen("mercadorias.dat","rb");
	
	Mercadoria *inf3 = (Mercadoria*) calloc(1,sizeof(Mercadoria));
		fread(inf3,sizeof(Mercadoria),1,f);
		printf("%d %s %d\n",inf3->codigo,inf3->descricao,inf3->quantidade);
	
	fclose(f);*/
}
void limparBuffer(void){
	char c;
	while( (c=getchar()) != '\n' && c != EOF );
}
void limparARQ(void){
	FILE *f;
	f = fopen("mercadorias.dat","wb");
	
	if(f==NULL){
		printf("*Falha ao limpar arquivo.");
		exit(1);
	}
	
	fclose(f);
}

