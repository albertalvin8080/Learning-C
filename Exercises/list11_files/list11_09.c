#define tam 30
#include <stdio.h>
#include <stdlib.h>
void limpar(FILE *f3);
void checarAbertura(FILE *f);
void abrirARQ(char arq1[],char arq2[]);
void concatenar(FILE *fRead,FILE *fAppend);

int main()
{
    char arq1[tam],arq2[tam];
    printf("Insira o nome do ARQ1: ");
    scanf("%30[^\n]%*c",arq1);
    printf("Agora o nome do ARQ2: ");
    scanf("%30[^\n]%*c",arq2);
    
    abrirARQ(arq1,arq2);
	
    return 0;
}
void abrirARQ(char arq1[],char arq2[]){
	FILE *f1,*f2,*f3;
	
	f1=fopen(arq1,"r");
		checarAbertura(f1);
	f2=fopen(arq2,"r");
		checarAbertura(f2);
	
	limpar(f3);
	f3=fopen("arq3.txt","a");
		checarAbertura(f3);
	
	concatenar(f1,f3);
	concatenar(f2,f3);
	
	fclose(f1);
	fclose(f2);
	fclose(f3);
	
}
void limpar(FILE *f3){
	f3=fopen("arq3.txt","w");
	fclose(f3);
}
void concatenar(FILE *fRead,FILE *fAppend){
	char str[1000];
	
	while(fgets(str,1000,fRead) != NULL){
		fputs(str,fAppend);
	}
}
void checarAbertura(FILE *f){
	if(f==NULL){
		printf("\nNao foi possiver abrir os arquivos.");
		exit(1);
	}
}
