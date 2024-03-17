#include <stdio.h>
#include <stdlib.h>
struct data{
	int hojeAno;
}hoje;

struct nomeNascimento{
	int anoNas;
	int idade;
	char nome[40];
}info[100];

void lerAno(void);
int lerARQ(char arq1[]);
void escrever(int quant,char arq2[]);

int main()
{
	char arq1[40],arq2[40];
    printf("Nome do ARQ de entrada: ");
    	scanf("%40[^\n]%*c",arq1);
    
	lerAno();	
    int quant=lerARQ(arq1);
    
    printf("Agora nome do ARQ de saida: ");
    	scanf("%40[^\n]%*c",arq2);
    
    escrever(quant,arq2);

    return 0;
}
void escrever(int quant,char arq2[]){
	FILE *f2;
	f2=fopen(arq2,"w");
	
	if(f2==NULL){
		printf("\n Falha ao abrir arquivo n2.");
		exit(1);
	}
	
	for(int i=0;i<quant;i++){
		if(info[i].idade>18){
			fprintf(f2,"%s/ %s",info[i].nome,"maior de idade");
		}else if(info[i].idade<18){
			fprintf(f2,"%s/ %s",info[i].nome,"menor de idade");
		}else{
			fprintf(f2,"%s/ %s",info[i].nome,"entrando na maior idade");
		}
	}
	
	fclose(f2);
}
int lerARQ(char arq1[]){
	FILE *f1;
	f1=fopen(arq1,"r");
	
	if(f1==NULL){
		printf("\n Falha ao abrir arquivo n1.");
		exit(1);
	}
	
	int i=0;
	while(fscanf(f1,"%40[^/]%*c%d",info[i].nome,&info[i].anoNas) != EOF){
		info[i].idade = hoje.hojeAno - info[i].anoNas;
		//printf("%s %d %d",info[i].nome,info[i].anoNas,info[i].idade);
		i++;
	}
	
	fclose(f1);
	
	return i;
}
void lerAno(void){
	printf("Insira o ano atual: ");
	scanf("%d%*c",&hoje.hojeAno);
}
