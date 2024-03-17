#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#define tam 30
void limpar(char arq[]);
void preencher(char arq[]);
void cidadeMaisPopulosa(char arq1[],char arq2[]);

int main()
{
	char arq1[tam],arq2[tam];
    printf("Insira o nome do arquivo de ENTRADA: ");
    	scanf("%30[^\n]%*c",arq1);
    printf("Agora o nome do arquivo de SAIDA: ");
    	scanf("%30[^\n]%*c",arq2);
    
    printf("\n");
    //limpar(arq1); desnecessario no momento
    preencher(arq1);
    cidadeMaisPopulosa(arq1,arq2);

    return 0;
}
void cidadeMaisPopulosa(char arq1[],char arq2[]){
	FILE *f1,*f2;
	f1=fopen(arq1,"r");
	f2=fopen(arq2,"w");
	
	int num,maiorN=-1;
	char str[40],maiorS[40];
	while(fscanf(f1,"%40[^/]%*c %d%*c",str,&num) != EOF){
		
		if(num>maiorN){
			maiorN=num;
			strcpy(maiorS,str);
		}
	}
	
	fprintf(f2,"%s/ %d",maiorS,maiorN);
	printf("\n%s %d",maiorS,maiorN);
}
void preencher(char arq[]){
	FILE *f;
	f=fopen(arq,"w");
	
	int hab;
	char str[40];
	for(int i=1; ;i++){
		printf("('0' termina)\nInsira a Cidade: ");
			scanf("%40[^\n]",str);
		if(str[0]=='0') break;
		
		printf("Agora o num. de habitantes: ");
			scanf("%d%*c",&hab);
		
		fprintf(f,"%s/ %d\n",str,hab);
	}
	fclose(f);
}
void limpar(char arq[]){
	FILE *f;
	f=fopen(arq,"w");
	fclose(f);
}
