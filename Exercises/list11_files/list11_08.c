#include <stdio.h>
#include <ctype.h>
void escrever(char arq1[]);
void copiar(char arq1[],char arq2[]);

int main()
{
	char arq1[40],arq2[40];
    printf("Insira o nome do arquivo de ENTRADA: ");
    scanf("%40[^\n]%*c",arq1);
    printf("Agora o nome do arquivo de SAIDA: ");
    scanf("%40[^\n]%*c",arq2);
    
    escrever(arq1);
    copiar(arq1,arq2);

    return 0;
}
void copiar(char arq1[],char arq2[]){
	char c;
	FILE *f1,*f2;
	f1=fopen(arq1,"r");
	f2=fopen(arq2,"w");
	
	if(f1==NULL || f2==NULL){
		printf("\nErro ao abrir arquivos.");
	}else{
		while( (c=fgetc(f1)) != EOF ){
			c=toupper(c);
			fputc(c,f2);
		}
	}
}
void escrever(char arq1[]){
	FILE *f1;
	char str[100];
	f1=fopen(arq1,"w");
	
	if(f1==NULL){
		printf("\nNao foi possivel abrir arquivo.");
				
	}else{
		printf("\n");
		while(1){
			printf("Escreva no ARQ1 (ou '0' pra parar): ");
			fgets(str,100,stdin);
			if(str[0]=='0') break;
			fputs(str,f1);
		}
		fclose(f1);
	}
	
}
