#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int procurar(char arq[],char palavra[]);

int main()
{
	char arq[40],palavra[40];
    printf("Insira o nome de um arquivo: ");
    	scanf("%40[^\n]%*c",arq);
	printf("Agora, uma palavra qualquer: ");
		scanf("%40[^\n]%*c",palavra);
	
	int ret=procurar(arq,palavra);
	
	if(ret>0){
		printf("\n'%s' aparece %d vezes em %s",palavra,ret,arq);
	}else{
		printf("\n'%s' NAO estah contida em %s",palavra,arq);
	}
	
    return 0;
}
int procurar(char arq[],char palavra[]){
	FILE *f;
	f=fopen(arq,"r");
	if(f==NULL){
		printf("\nFalha ao abrir arquivo.");
		exit(1);
	}
	
	char c;
	int cont=0,aux=0;
	
	while( (c=fgetc(f)) != EOF ){
		if(palavra[aux]==c){
			aux++;
		}else if(palavra[aux]!=c && palavra[0]==c){
			aux=0;
			fseek(f,-1,SEEK_CUR);
		}else{
			aux=0;
		}
		if(aux==strlen(palavra)){
			cont++;
			aux=0;
		}
	}
	fclose(f);
	return cont;
}
