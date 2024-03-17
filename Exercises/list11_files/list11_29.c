#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	char nome_vendedor[40];
	int codigo_vendendor;
	float valor_da_venda;
	int mes;
}Vendas;

void limparBuffer(void);
void testarAbertura(FILE *f);
void alterarVenda(char arq[]);
int excluirArquivo(char arq[]);
void testarCriacao(char arq[]);
void excluirVendedor(char arq[]);
void incluirRegistro(char arq[]);
void imprimirRegistros(char arq[]);
int checarRepeticao(Vendas *info,int lI);
int confirmarNome(char arq[],char nome[]);
void ordenaRegistros(Vendas *info,int lI);

int main()
{
    char arq[30];
    int op,flag=0;
    
    do{
    	printf("======================MENU======================\n");
    	printf("1 - Criar novo arquivo de dados;\n"
		"2 - Incluir um determinado registro no arquivo;\n"
		"3 - Excluir um determinado vendedor no arquivo;\n"
		"4 - Alterar o valor de uma venda no arquivo;\n"
		"5 - Imprimir os registros na saida padrao;\n"
		"6 - Excluir o arquivo de dados;\n"
		"7 - Finalizar o programa.\n?");
    	scanf("%d",&op);
    	limparBuffer();
    	
    	if(op!=1 && flag==0 && op!=7){
    		printf("\n*Primeiro crie o arquivo.\n\n");
    		continue;
		}
    	
    	switch(op){
    		case 1:
    			flag=1;
				printf("\nInsira o nome do arquivo: ");
					scanf("%30s",arq);
					limparBuffer();
					
				testarCriacao(arq);
				printf("ARQUIVO CRIADO COM SUCESSO.\n");
    			break;
    		case 2:
    			incluirRegistro(arq);
    			break;
    		case 3:
    			excluirVendedor(arq);
    			break;
    		case 4:
    			alterarVenda(arq);
    			break;
    		case 5:
    			imprimirRegistros(arq);
    			break;
    		case 6:
    			flag = excluirArquivo(arq);
    			break;
    		case 7:
    			printf("===================FINALIZADO===================");
    			break;
    		default:
    			printf("\nOPCAO INVALIDA.\n");
		}
    	printf("\n");
    	
	}while(op!=7);
	
    return 0;
}
int excluirArquivo(char arq[]){
	char c;
	printf("\nDeseja mesmo excluir?\n(S/N): ");
		scanf("%c",&c);
		limparBuffer();
	
	c = tolower(c);
	if(c != 's'){
		printf("*Operacao cancelada.\n");
		return 1;
	}else{
		remove(arq);
		printf("ARQUIVO EXCLUIDO.\n");
		return 0;
	}
}
void alterarVenda(char arq[]){
	
	float venda;
	char nome[40];
	
	printf("\nDe qual vendedor deseja alterar?: ");
		scanf("%40[^\n]",nome);
		limparBuffer();
	
	printf("Agora o novo valor da venda: ");
		scanf("%f",&venda);
		limparBuffer();
	
	FILE *f,*ft;
	f = fopen(arq,"r");
		testarAbertura(f);
	ft = fopen("temp.txt","w");
		testarAbertura(ft);
	
	int flag = 0;
	Vendas inf2;
	while( fscanf(f,"%40[^/]%*c %d %f %d%*c",inf2.nome_vendedor,
		&inf2.codigo_vendendor,&inf2.valor_da_venda,
		&inf2.mes) != EOF ){
			if( strstr(inf2.nome_vendedor,nome) != NULL ){
				
				inf2.valor_da_venda = venda;
				
				fprintf(ft,"%s/ %d %.2f %d\n",inf2.nome_vendedor,
				inf2.codigo_vendendor,inf2.valor_da_venda,
				inf2.mes);
				
				flag=1;
			}else{
				fprintf(ft,"%s/ %d %.2f %d\n",inf2.nome_vendedor,
				inf2.codigo_vendendor,inf2.valor_da_venda,
				inf2.mes);
			}
		}
	
	fclose(f);
	fclose(ft);
	
	remove(arq);
	rename("temp.txt",arq);
	
	if(flag==0){
		printf("NOME INEXISTENTE NA LISTA.\n");
	}else{
		printf("VALOR ALTERADO COM SUCESSO.\n");
	}
	//return 1;
}
/*int confirmarNome(char arq[],char nome[]){
	FILE *f;
	f = fopen(arq,"r");
	testarAbertura(f);
	
	Vendas inf2;
	while( fscanf(f,"%40[^/]%*c %d %f %d%*c",inf2.nome_vendedor,
		&inf2.codigo_vendendor,&inf2.valor_da_venda,
		&inf2.mes) != EOF ){
			if(strstr(inf2.nome_vendedor,nome) != NULL){
				return 1;
			}
		}
	
	fclose(f);
	return 0;
}*/
void excluirVendedor(char arq[]){
	
	char nome[40];
	printf("\nInsira o nome (completo) do vendedor para excluir: ");
		scanf("%40[^\n]",nome);
		limparBuffer();
	
	FILE *f,*ft;
	f = fopen(arq,"r");
		testarAbertura(f);
	ft = fopen("temp.txt","w");
		testarAbertura(ft);
	
	int flag=0;
	Vendas inf2;
	while( fscanf(f,"%40[^/]%*c %d %f %d%*c",inf2.nome_vendedor,
		&inf2.codigo_vendendor,&inf2.valor_da_venda,
		&inf2.mes) != EOF ){
			if( strstr(inf2.nome_vendedor,nome) == NULL ){
				fprintf(ft,"%s/ %d %.2f %d\n",inf2.nome_vendedor,
				inf2.codigo_vendendor,inf2.valor_da_venda,
				inf2.mes);
			}else{
				flag++;
			}
		}
	
	fclose(f);
	fclose(ft);
	
	remove(arq);
	rename("temp.txt",arq);
	
	if(flag==0){
		printf("NOME INEXISTENTE NA LISTA.\n");
	}else{
		printf("VENDEDOR EXCLUIDO COM SUCESSO.\n");
	}
}
void imprimirRegistros(char arq[]){
	FILE *f;
	f = fopen(arq,"r");
	testarAbertura(f);
	
	int i=0;
	Vendas inf2;
	while( fscanf(f,"%40[^/]%*c %d %f %d%*c",inf2.nome_vendedor,
		&inf2.codigo_vendendor,&inf2.valor_da_venda,
		&inf2.mes) != EOF ){
		printf("\n---Vendedor %d---\n",i+1);
		printf("Nome: %s\n",inf2.nome_vendedor);
		printf("Mes: %d\n",inf2.mes);
		printf("Codigo: %d\n",inf2.codigo_vendendor);
		printf("Valor da venda: R$%.2f\n",inf2.valor_da_venda);
		
		i++;
	}
	
	fclose(f);
	
	if(i==0){
		printf("\nARQUIVO VAZIO.\n");
	}
}
void incluirRegistro(char arq[]){
	
	Vendas *info = (Vendas*) calloc(100,sizeof(Vendas));
	int lI = 0;
	
	FILE *fr;
	fr = fopen(arq,"r");
	testarAbertura(fr);
	
	while( fscanf(fr,"%40[^/]%*c %d %f %d%*c",info[lI].nome_vendedor,
		&info[lI].codigo_vendendor,&info[lI].valor_da_venda,
		&info[lI].mes) != EOF ){
			lI++;
	}
	
	fclose(fr);
	
	int flag=0;
	while(flag==0){
		printf("\n---Insira---\n");
		printf("Nome do vendedor: ");
			scanf("%40[^\n]",info[lI].nome_vendedor);
			limparBuffer();
		printf("Codigo: ");
			scanf("%d",&info[lI].codigo_vendendor);
			limparBuffer();
		printf("Valor da venda: ");
			scanf("%f",&info[lI].valor_da_venda);
			limparBuffer();
		printf("Mes: ");
			scanf("%d",&info[lI].mes);
			limparBuffer();
			
		flag = checarRepeticao(info,lI);
		
		if(flag==0){
			printf("\nO CODIGO DE VENDEDOR E O MES NAO PODEM SER IGUAIS.\n");
		}
	}
	
	lI++;
	
	ordenaRegistros(info,lI);
	
	FILE *f;
	f = fopen(arq,"w");
	testarAbertura(f);
	
	for(int i=0;i<lI;i++){
		fprintf(f,"%s/ %d %.2f %d\n",info[i].nome_vendedor,
		info[i].codigo_vendendor,info[i].valor_da_venda,
		info[i].mes);
	}
	
	fclose(f);
	free(info);
}
int checarRepeticao(Vendas *info,int lI){
	for(int i=0;i<=lI;i++){
		for(int j=i+1;j<=lI;j++){
			if(info[i].codigo_vendendor == info[j].codigo_vendendor && 
			info[i].mes == info[j].mes){
				return 0;
			}
		}
	}
	
	return 1;
}
void ordenaRegistros(Vendas *info,int lI){
	Vendas inft;
	for(int i=0;i<lI;i++){
		for(int j=i+1;j<lI;j++){
			if(info[i].codigo_vendendor>info[j].codigo_vendendor){
				
				inft.mes = info[i].mes;
				inft.valor_da_venda = info[i].valor_da_venda;
				inft.codigo_vendendor = info[i].codigo_vendendor;
				memset(inft.nome_vendedor,0,40*sizeof(char));
				strcpy(inft.nome_vendedor,info[i].nome_vendedor);
				
				info[i].mes = info[j].mes;
				info[i].valor_da_venda = info[j].valor_da_venda;
				info[i].codigo_vendendor = info[j].codigo_vendendor;
				memset(info[i].nome_vendedor,0,40*sizeof(char));
				strcpy(info[i].nome_vendedor,info[j].nome_vendedor);
				
				info[j].mes = inft.mes;
				info[j].valor_da_venda = inft.valor_da_venda;
				info[j].codigo_vendendor = inft.codigo_vendendor;
				memset(info[j].nome_vendedor,0,40*sizeof(char));
				strcpy(info[j].nome_vendedor,inft.nome_vendedor);
				
			}else if(info[i].codigo_vendendor==info[j].codigo_vendendor
			&& info[i].mes>info[j].mes){
				
				inft.mes = info[i].mes;
				inft.valor_da_venda = info[i].valor_da_venda;
				inft.codigo_vendendor = info[i].codigo_vendendor;
				memset(inft.nome_vendedor,0,40*sizeof(char));
				strcpy(inft.nome_vendedor,info[i].nome_vendedor);
				
				info[i].mes = info[j].mes;
				info[i].valor_da_venda = info[j].valor_da_venda;
				info[i].codigo_vendendor = info[j].codigo_vendendor;
				memset(info[i].nome_vendedor,0,40*sizeof(char));
				strcpy(info[i].nome_vendedor,info[j].nome_vendedor);
				
				info[j].mes = inft.mes;
				info[j].valor_da_venda = inft.valor_da_venda;
				info[j].codigo_vendendor = inft.codigo_vendendor;
				memset(info[j].nome_vendedor,0,40*sizeof(char));
				strcpy(info[j].nome_vendedor,inft.nome_vendedor);
			}
		}
	}
}
void testarCriacao(char arq[]){
	FILE *f;
	f = fopen(arq,"w");
	testarAbertura(f);
	
	fclose(f);
}
void testarAbertura(FILE *f){
	if(f==NULL){
		printf("\nFalha ao abrir arquivo.");
		exit(1);
	}
}
void limparBuffer(void){
	char c;
	while( (c=getchar()) != '\n' && c != EOF );
}

