#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 5

typedef struct{
	char nomeF[40];
	int ano;
	float duracao;
}Filmes;

typedef struct{
	char nomeDi[20];
	int quantFil;
	Filmes filmes[20];
}Diretor;

int main()
{
	int i,j,aux=0;
	char *p,nome[20],stop[2]="\n";
	Diretor diretor[5];
    
    for(i=0;i<n;i++){
    	printf("Insira o nome do diretor n%d: ",i+1);
    	scanf("%20[^\n]",diretor[i].nomeDi);
    	printf("Agora a quant. de filmes feitos: ");
    	scanf("%d%*c",&diretor[i].quantFil);
    	if(diretor[i].quantFil<1){
    		printf("Quantidade de filmes invalida.\n");
    		i--;
    		continue;
		}
		for(j=0;j<diretor[i].quantFil;j++){
			printf("Digite o nome do %do filme: ",j+1);
			scanf("%40[^\n]",diretor[i].filmes[j].nomeF);
			printf("Agora o ano do filme: ");
			scanf("%d",&diretor[i].filmes[j].ano);
			printf("Agora a duracao do filme (horas): ");
			scanf("%f%*c",&diretor[i].filmes[j].duracao);
		}
	}
	
	while(nome){
		printf("\nInsira o nome de um diretor: ");
		fgets(nome,20,stdin);
		if(strcmp(nome,stop)==0){
			break;
		}
		nome[strcspn(nome, "\n")] = 0;
		for(i=0;i<n;i++){
			p = strstr(diretor[i].nomeDi,nome);
			if(p!=NULL){
				printf("#Diretor: %s\n",diretor[i].nomeDi);
				printf("#Quant. filmes: %d\n",diretor[i].quantFil);
				printf("#Informacoes dos filmes\n");
				for(j=0;j<diretor[i].quantFil;j++){
					printf("  Filme n%d: %s\n",j+1,diretor[i].filmes[j].nomeF);
					printf("   -Ano: %d\n",diretor[i].filmes[j].ano);
					printf("   -Duracao: %.1fh\n",diretor[i].filmes[j].duracao);
				}
				aux=1;
			}
		}
		if(aux==0){
			printf("Diretor nao encontrado.\n");
		}
		aux=0;
	}

    return 0;
}
