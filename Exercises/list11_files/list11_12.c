#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct {
	int caracteres,linhas,palavras;
	int alfaV[26];
	char alfabeto[27];
} informacoes;
int numCarac(FILE *f);
int numLinhas(FILE *f);
int numPalavras(FILE *f);
void abrir(char arq[],informacoes *info);
void cadaLetra(FILE *f,informacoes *info);

int main()
{
	informacoes info;
    char arq[40];
    printf("Insira o nome de um arquivo: ");
    	scanf("%40[^\n]%*c",arq);
	
	abrir(arq,&info);
	
	printf("\nNumero de caracteres = %d",info.caracteres);
	printf("\nNumero de linhas = %d",info.linhas);
	printf("\nNumero de palavras = %d\n\n",info.palavras);
	for(int i=0;i<26;i++){
		printf("%c = %d\n",info.alfabeto[i],info.alfaV[i]);
	}
	
    return 0;
}
void abrir(char arq[],informacoes *info){
	FILE *f;
	f=fopen(arq,"r");
	
	if(f==NULL){
		printf("\nFalha ao abrir arquivo.");
		exit(1);
	}
	
	info->caracteres = numCarac(f);
	info->linhas = numLinhas(f);
	info->palavras = numPalavras(f);
	
	cadaLetra(f,info);
	
	fclose(f);
}
void cadaLetra(FILE *f,informacoes *info){
	for(int i=0;i<26;i++){
		info->alfaV[i]=0;
	}
	
	char c='a';
	for(int i=0;i<26;i++){
		info->alfabeto[i]=c;
		c++;
	}
	
	while( (c=fgetc(f)) != EOF ){
		c=tolower(c);
		for(int j=0;j<26;j++){
			if(c==info->alfabeto[j]){
				info->alfaV[j]+=1;
			}
		}
	}
}
int numPalavras(FILE *f){
	int cont=0,aux=0;
	char c;
	
	while( (c=fgetc(f)) != EOF){
		if( aux==0 && (c!='/' && c!=' ' && c!='\n') ){
			aux=1;
			cont++;
		}else if( aux==1 && (c=='/' || c==' ' || c=='\n') ){
			aux=0;
		}
	}
	rewind(f);
	
	return cont;
}
int numLinhas(FILE *f){
	int cont=1;
	char c;
	
	while((c=fgetc(f)) != EOF){
		if(c=='\n'){
			cont++;
		}
	}
	rewind(f);
	
	return cont;
}
int numCarac(FILE *f){
	int cont=0;
	char c;
	
	while( (c=fgetc(f)) != EOF ){
		cont++;
	}
	rewind(f);
	
	return cont;
}
