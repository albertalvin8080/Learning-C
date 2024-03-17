#include <time.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
	int codigo;
	float preco;
	char nome[30];
}Produto;

int main()
{
	srand(time(NULL));
	
	//vetor de 1Kb
    int *v = (int*) malloc(1024);
    for(int i=0;i<258;i++){
    	v[i] = i+1;
    	//printf("%d ",v[i]);
	}
	
	//matriz 10x10
	int **m = (int**) calloc(10,sizeof(int*));
	for(int i=0;i<10;i++){
		m[i] = (int*) calloc(10,sizeof(int));
	}
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			m[i][j] = i;
			//printf("%d ",m[i][j]);
		}
		//printf("\n");
	}
	
	//vetor de 50 registros
	Produto *info = (Produto*) calloc(50,sizeof(Produto));
	char str[30] = "nomeProduto";
	/*for(int i=0;i<50;i++){
		strcpy(info[i].nome,str);
		info[i].preco = 5.24;
		info[i].codigo = 1293;
	}
	for(int i=0;i<50;i++){
		printf("\n---Produto %d---\n",i+1);
		printf("Nome: %s\n",info[i].nome);
		printf("Codigo: %d\n",info[i].codigo);
		printf("Preco: R$%.2f\n",info[i].preco);
	}*/
    
    //Texto de ate 100 linhas com ate 80 caracteres em cada linha
    char **mstr = (char**) calloc(100,sizeof(char*));
    for(int i=0;i<100;i++){
    	mstr[i] = (char*) calloc(80,sizeof(char));
	}
	
	int i;
	printf("Insira varios textos ('0' em linha unica termina): ");
	for(i=0;i<100;i++){
		fgets(mstr[i],81,stdin);
		if(mstr[i][0]=='0') break;
	}
	
	for(int j=0;j<i;j++){
		printf("%s\n",mstr[j]);
	}

    return 0;
}

