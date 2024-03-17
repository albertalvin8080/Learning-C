#include <stdio.h>
#include <stdlib.h>

void notaCrescente(char arq1[],char arq2[]);

int main()
{
	char arq1[30],arq2[30];
    printf("Nome do ARQ de entrada:? ");
    	scanf("%30[^\n]%*c",arq1);
    printf("Nome do ARQ de saida:? ");
    	scanf("%30[^\n]%*c",arq2);
    
    notaCrescente(arq1,arq2);
    

    return 0;
}
void notaCrescente(char arq1[],char arq2[]){
	FILE *f1,*f2;
	f1=fopen(arq1,"r");
	f2=fopen(arq2,"w");
	
	if(f1==NULL){
		printf("\nArquivo de entrada nao pode ser lido.");
		exit(1);
	}if(f2==NULL){
		printf("\nArquivo de saida nao pode ser criado.");
		exit(1);
	}
	
	char nome[40];
	float notaOrdem[3],temp;
	fscanf(f1,"%40[^/]%*c",nome);
	
	for(int i=0;i<3;i++){
		fscanf(f1,"%f",&notaOrdem[i]);
	}
	
	//ordenar
	for(int i=0;i<3;i++){
		for(int j=i+1;j<3;j++){
			if(notaOrdem[i]>notaOrdem[j]){
				temp = notaOrdem[i];
				notaOrdem[i] = notaOrdem[j];
				notaOrdem[j] = temp;
			}
		}
	}
	
	fprintf(f2,"%s/ %.1f %.1f %.1f",nome,notaOrdem[0],notaOrdem[1],notaOrdem[2]);
	
	fclose(f1);
	fclose(f2);
}
