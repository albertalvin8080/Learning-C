#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N,M;
    printf("Insira N: ");
    scanf("%d",&N);
    printf("Insira M: ");
    scanf("%d",&M);
    
    int **m = (int**) calloc(N,sizeof(int*));
    for(int i=0;i<N;i++){
    	m[i] = (int*) calloc(M,sizeof(int));
	}
	
	//preenche matriz
	srand(time(NULL));
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			m[i][j] = (rand()%90)+10;
		}
	}
	
	//cria matriz transposta
	int **trans = (int**) calloc(M,sizeof(int*));
	for(int i=0;i<M;i++){
		trans[i] = (int*) calloc(N,sizeof(int));
	}
	
	//preenche transposta
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			trans[i][j] = m[j][i];
		}
	}
	
	//printf matriz
	printf("\nMatriz:\n");
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}
	
	//printf transposta
	printf("\nTransposta:\n");
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			printf("%d ",trans[i][j]);
		}
		printf("\n");
	}

    return 0;
}

