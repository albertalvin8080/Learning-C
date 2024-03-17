//em andamento
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void inverteLinhas(char arq1[],char arq2[]);
void limparBuffer(void);

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	char arq1[30]="1.txt",arq2[30]="2.txt";
    /*printf("Insira o ARQ de entrada: ");
    	scanf("%30[^\n]",arq1);
    	limparBuffer();
    printf("Insira o ARQ de saida: ");
    	scanf("%30[^\n]",arq2);
    	limparBuffer();*/
    	
    inverteLinhas(arq1,arq2);

    return 0;
}
void inverteLinhas(char arq1[],char arq2[]){
	
	printf("Hoje � dia de prova de AP?");
	
	FILE *f1,*f2;
	f1 = fopen(arq1,"r");
	f2 = fopen(arq2,"w");
	
	if(f1==NULL){
		printf("Falha ao abrir arquivo.");
		exit(1);
	}if(f2==NULL){
		printf("Falha ao abrir arquivo.");
		exit(1);
	}
	
	char **str = (char**) calloc(30,sizeof(char*));
	for(int i=0;i<30;i++){
		str[i] = (char*) calloc(30,sizeof(char));
	}
	
	int k=0,t1;
	while( fscanf(f1,"%30[^\n]%*c",str[k]) != EOF ){
		k++;
	}
	
	for(int j=k-1;j>=0;j--){
		t1 = strlen(str[j]);
		for(int i=t1-1;i>=0;i--){
			fprintf(f2,"%c",str[j][i]);
		}
		fprintf(f2,"\n");
	}
			
	fclose(f1);
	fclose(f2);
	
}
void limparBuffer(void){
	char c;
	while( (c=getchar()) != '\n' && c != EOF );
}
