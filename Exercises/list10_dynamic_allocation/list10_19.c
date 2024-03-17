#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define c 30

void recuperar(char **m,int l);
void gravarNome(char **m,int l);
void apagarNome(char **m,int l);
void substituir(char **m,int l);
void substituir(char **m,int l);
void apagarEspecifico(char **m,int l);

int main()
{
	int l;
    printf("Quantos nomes quer armazenar: ");
    scanf("%d%*c",&l);
	
	char **m = (char**) calloc(l,sizeof(char*));
	for(int i=0;i<l;i++){
		m[i] = (char*) calloc(c,sizeof(char));
	}
	
	char op;
	
	do{
		printf("\n---Menu---\n");
		printf("(a)Gravar nome em uma linha;\n");
		printf("(b)Apagar nome de uma linha;\n");
		printf("(c)Informar um nome, procurar linha onde se encontra e substituir;\n");
		printf("(d)Informar um nome, procurar linha onde se encontra e apagar;\n");
		printf("(e)Pedir para recuperar o nome contido em uma linha da matriz;\n");
		printf("(f)Para terminar;\n");
		scanf("%c%*c",&op);
		
		switch(op){
			case 'a':
				gravarNome(m,l);
				break;
			case 'b':
				apagarNome(m,l);
				break;
			case 'c':
				substituir(m,l);
				break;
			case 'd':
				apagarEspecifico(m,l);
				break;
			case 'e':
				recuperar(m,l);
				break;
			case 'f':
				printf("\n---Programa Finalizado---");
				break;
			
			default:
				printf("ESCOLHA INVALIDA.");
		}
		
	}while(op!='f');
	
    return 0;
}
void recuperar(char **m,int l){
	char str[30],*p;
	printf("-Insira o nome para recuperar: ");
	scanf("%30[^\n]%*c",str);
	
	for(int i=0;i<l;i++){
		p = strstr(m[i],str);
		if(p!=NULL){
			printf("-Nome: %s.\n",m[i]);
			break;
		}
	}
	if(p==NULL) printf("-Nome nao encontrado.\n");
}
void apagarEspecifico(char **m,int l){
	char str[30],temp[30]="\0",*p;
	printf("-Insira nome que deseja apagar: ");
	scanf("%30[^\n]%*c",str);
	
	for(int i=0;i<l;i++){
		p = strstr(m[i],str);
		if(p!=NULL){
			strcpy(m[i],temp);
			printf("-Sucesso.\n");
			break;
		}
	}
	
	if(p==NULL) printf("-Nome nao encontrado.\n");
}
void substituir(char **m,int l){
	char str[30],*p;
	printf("-Insira nome antigo: ");
	scanf("%30[^\n]%*c",str);
	
	for(int i=0;i<l;i++){
		p = strstr(m[i],str);
		if(p!=NULL){
			printf("-Insira o novo nome: ");
			scanf("%30[^\n]%*c",m[i]);
			printf("-Sucesso.\n");
			break;
		}
	}
	
	if(p==NULL) printf("-Nome nao encontrado.\n");
	
	
}
void apagarNome(char **m,int l){
	int linha;
	printf("-Insira qual linha apagar (0 a %d): ",l-1);
	scanf("%d%*c",&linha);
	
	char temp[30]={0};
	strcpy(m[linha],temp);
	
	printf("-Sucesso.\n");
}
void gravarNome(char **m,int l){
	int linha;
	printf("-Insira qual linha (0 a %d): ",l-1);
	scanf("%d%*c",&linha);
	
	printf("-Insira o nome: ");
	scanf("%30[^\n]%*c",m[linha]);
	
	printf("-Sucesso.\n");
}

