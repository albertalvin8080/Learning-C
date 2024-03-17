#include <math.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char nome[40];
	int x,y;
}Cidades;

void printfMatriz(int **m, int N);
void lerCidades(Cidades *info,int N);
void preencheMatriz(Cidades *info,int **m,int N);

int main()
{
	int N;
    printf("Insira o numero de cidades (N): ");
    scanf("%d%*c",&N);
	
	//struct cidades
	Cidades *info = (Cidades*) calloc(N,sizeof(Cidades));
	
	lerCidades(info,N);
	
	//matriz distancias entre 2 cidades
	int **m = (int**) calloc(N,sizeof(int*));
	for(int i=0;i<N;i++){
		m[i] = (int*) calloc(N,sizeof(int));
	}
	
	preencheMatriz(info,m,N);
	
	printfMatriz(m,N);
	
    return 0;
}
void printfMatriz(int **m, int N){
	printf("\nMatriz Distancias:\n");
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}
	
	int a,b;
	do{
		printf("\nInsira os numeros de duas cidades (-1 termina): ");
		scanf("%d%d",&a,&b);
		a--;
		b--;
		
		if(a>=N || b>=N){
			printf("Cidade invalida utilizada.\n");
			continue;
		}
		
		for(int i=0;i<N;i++){
			for(int j=0;j<N;j++){
				if(i==a && j==b){
					printf("Distancia: %d\n",m[i][j]);	
				}
			}
		}
	}while(a>=0);
	
}
void preencheMatriz(Cidades *info,int **m,int N){
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			m[i][j] = sqrt((info[j].x - info[i].x) * (info[j].x - info[i].x) 
					  		+ 
					   	   (info[j].y - info[i].y) * (info[j].y - info[i].y));
		}
	}
}
void lerCidades(Cidades *info,int N){
	for(int i=0;i<N;i++){
		printf("\n-Cidade %d-\n",i+1);
		printf("Insira o nome: ");
			scanf("%40[^\n]%*c",info[i].nome);
		printf("Insira X e Y: ");
			scanf("%d%d%*c",&info[i].x,&info[i].y);
	}
}

