#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 5

typedef struct{
	float quantIng;
	char nomeIng[25];
}Ing;

typedef struct{
	char nomeR[25];
	int quantMain;
	Ing ing[20];
}Receita;

int main()
{
	int i,j,aux=0;
	char *p,nome[25]="iei",stop[2]="\n";
	Receita receita[5];
	
    for(i=0;i<n;i++){
    	printf("Insira o nome da receita n%d: ",1+i);
    	scanf("%25[^\n]%*c",receita[i].nomeR);
    	printf("Agora a quantidade de ingredientes: ");
    	scanf("%d%*c",&receita[i].quantMain);
    	if(receita[i].quantMain<1){
    		printf("Voce nao pode fazer uma receita sem ingredientes.\n");
    		i--;
    		continue;
		}
    	for(j=0;j<receita[i].quantMain;j++){
    		printf("Digite o nome do %do ingred.: ",j+1);
    		scanf("%25[^\n]",receita[i].ing[j].nomeIng);
    		printf("Insira a quant. em GRAMAS do ingred.: ");
    		scanf("%f%*c",&receita[i].ing[j].quantIng);
		}
	}
	
	while(strlen(nome)!=0){
		printf("\nDigite o nome de uma receita que deseja procurar (Enter termina):\n");
		fgets(nome,25,stdin);
		if(strcmp(nome,stop)==0){
			break;
		}
		nome[strcspn(nome, "\n")] = 0;
		for(i=0;i<n;i++){
			p = strstr(receita[i].nomeR,nome);
			if(p!=NULL){
				printf("\n#Receita n%d: %s\n",i+1,receita[i].nomeR);
				printf("#Numero de ingredientes: %d\n",receita[i].quantMain);
				printf("#Ingredientes em ordem \n");
				for(j=0;j<receita[i].quantMain;j++){
					printf("  *Nome: %s\n",receita[i].ing[j].nomeIng);
					printf("     -Quantidade: %.1fg\n",receita[i].ing[j].quantIng);
				}
				aux=1;
			}
		}
		if(aux==0){
			printf("Receita nao encontrada.\n");
		}
		aux=0;
	}

    return 0;
}

