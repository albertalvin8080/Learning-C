#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Indice Global
int gI=0;

typedef struct{
	int dia;
	int mes;
}Data;

typedef struct{
	char nome[40];
	char telefone[20];
	Data aniversario;
}Agenda;

void limparBuffer(void);
void testarAbertura(FILE *f);
int listarLetra(Agenda *info);
void listarTudo(Agenda *info);
int pesquisarNome(Agenda *info);
int removerContato(Agenda *info);
void inserirContato(Agenda *info);
void escreverAgenda(Agenda *info);
void inicializarAgenda(Agenda *info);
int imprimirAniversariantes(Agenda *info);

int main()
{
	Agenda *info = (Agenda*) calloc(100,sizeof(Agenda));
	inicializarAgenda(info);
	
	char op;
    do{
    	printf("==========MENU==========\n");
    	printf("[a] Inserir Contato;\n");
    	printf("[b] Remover Contato;\n");
    	printf("[c] Pesquisar Contato Pelo Nome;\n");
    	printf("[d] Listar Todos os Contatos;\n");
    	printf("[e] Listar os Contatos Cujo Nome Inicia Com Uma Dada Letra;\n");
    	printf("[f] Imprimir os Aniversariantes do Mes;\n");
    	printf("{g} Encerrar Programa;\n?");
    		scanf("%c",&op);
    		limparBuffer();
    	
    	switch(op){
    		case 'a':
    			inserirContato(info);
    			break;
    		case 'b':
    			removerContato(info);
    			break;
    		case 'c':
    			pesquisarNome(info);
    			break;
    		case 'd':
    			listarTudo(info);
    			break;
    		case 'e':
    			listarLetra(info);
    			break;
    		case 'f':
    			imprimirAniversariantes(info);
    			break;
    		case 'g':
    			printf("===Programa Encerrado===");
    			break;
    		
    		default:
    			printf("OPCAO INVALIDA.\n");
		}
		printf("\n");
		
	}while(op!='g');
	
	escreverAgenda(info);
	free(info);
	
    return 0;
}
int imprimirAniversariantes(Agenda *info){
	if(gI==0){
		printf("\nSEM CONTATOS.\n");
		return 0;
	}
	
	int mes;
	printf("\nInsira o mes: ");
		scanf("%d",&mes);
		limparBuffer();
	
	int i,flag=0;
	for(i=0;i<gI;i++){
		if(info[i].aniversario.mes == mes){
			printf("\n-Nome: %s\n",info[i].nome);
			printf("-Telefone: %s\n",info[i].telefone);
			printf("-Aniversario: %d/%d\n",info[i].aniversario.dia,
									   	   info[i].aniversario.mes);
			flag++;
		}
	}
	
	if(flag==0){
		printf("CONTATO INEXISTENTE.\n");
	}
	
	return 1;
}
int listarLetra(Agenda *info){
	if(gI==0){
		printf("\nSEM CONTATOS.\n");
		return 0;
	}
	
	char letra;
	printf("\nInsira a primeira letra: ");
		scanf("%c",&letra);
		limparBuffer();
		tolower(letra);
	
	int i,flag=0;
	for(i=0;i<gI;i++){
		if(info[i].nome[0] == letra || info[i].nome[0] == (letra+32)){
			printf("\n-Nome: %s\n",info[i].nome);
			printf("-Telefone: %s\n",info[i].telefone);
			printf("-Aniversario: %d/%d\n",info[i].aniversario.dia,
									   	   info[i].aniversario.mes);
			flag=1;
		}
	}
	
	if(flag==0){
		printf("CONTATO INEXISTENTE.\n");
	}
	
	return 1;
}
int pesquisarNome(Agenda *info){
	if(gI==0){
		printf("\nSEM CONTATOS.\n");
		return 0;
	}
	
	char nome[20];
	printf("\nInsira o nome para pesquisar: ");
		scanf("%20[^\n]",nome);
		limparBuffer();
	
	int i,flag=0;
	for(i=0;i<gI;i++){
		if( strstr(info[i].nome,nome) != NULL ){
			printf("\n-Nome: %s\n",info[i].nome);
			printf("-Telefone: %s\n",info[i].telefone);
			printf("-Aniversario: %d/%d\n",info[i].aniversario.dia,
									   	   info[i].aniversario.mes);
			flag++;
		}
	}
	
	if(flag==0){
		printf("\nCONTATO INEXISTENTE.");
	}
	
	return 1;
}
int removerContato(Agenda *info){
	if(gI==0){
		printf("\nSEM CONTATOS.\n");
		return 0;
	}
	
	char nome[20];
	printf("\nInsira o nome (completo) do contato: ");
		scanf("%20[^\n]",nome);
		limparBuffer();
	
	int i,j,aux,flag=0;
	for(i=0;i<gI;i++){
		if(	strstr(info[i].nome,nome) != NULL ){
			for(aux=0,j=i+1;(i+aux)<gI;j++,aux++){
				info[i+aux].aniversario.dia = info[j].aniversario.dia;
				info[i+aux].aniversario.mes = info[j].aniversario.mes;
				
				memset(info[i+aux].nome,0,40);
				strcpy(info[i+aux].nome,info[j].nome);
				
				memset(info[i+aux].telefone,0,20);
				strcpy(info[i+aux].telefone,info[j].telefone);
			}
			gI--;
			flag=1;
			break;
		}
	}
	
	if(flag==0){
		printf("\nCONTATO INEXISTENTE.");
	}else{
		printf("CONTATO REMOVIDO.\n");
	}
	
	return 1;
}
void listarTudo(Agenda *info){
	int i=0,flag=0;
	for(i=0;i<gI;i++){
		printf("\n-Nome: %s\n",info[i].nome);
		printf("-Telefone: %s\n",info[i].telefone);
		printf("-Aniversario: %d/%d\n",info[i].aniversario.dia,
									   info[i].aniversario.mes);
		flag++;
	}
	
	if(flag==0){
		printf("\nAGENDA VAZIA.\n");
	}
}
void escreverAgenda(Agenda *info){
	FILE *f;
	f = fopen("temp.bin","wb");
	testarAbertura(f);
	
	int i=0;
	for(i=0;i<gI;i++){
		fwrite(&info[i],sizeof(Agenda),1,f);
	}
	
	fclose(f);
	
	remove("agenda.bin");
	rename("temp.bin","agenda.bin");
}
void inserirContato(Agenda *info){
	printf("\nInsira o nome: ");
		scanf("%40[^\n]",info[gI].nome);
		limparBuffer();
	printf("Telefone: ");
		scanf("%20[^\n]",info[gI].telefone);
		limparBuffer();
	printf("Aniversario (Dia e Mes): ");
		scanf("%d",&info[gI].aniversario.dia);
		limparBuffer();
		scanf("%d",&info[gI].aniversario.mes);
		limparBuffer();
	
	gI++;
}
void inicializarAgenda(Agenda *info){
	FILE *f;
	f = fopen("agenda.bin","rb");
	testarAbertura(f);
	
	while( fread(&info[gI],sizeof(Agenda),1,f) ){
		gI++;
	}
	
	fclose(f);
}
void testarAbertura(FILE *f){
	if(f==NULL){
		printf("*Falha na abertura de arquivo.");
		exit(gI);
	}
}
void limparBuffer(void){
	char c;
	while( (c=getchar()) != '\n' && c != EOF );
}

