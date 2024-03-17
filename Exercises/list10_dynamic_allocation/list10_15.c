#include <time.h>
#include <stdio.h>
#include <stdlib.h>

void lerMaiores(int **mat,int N,int M);

int main()
{
	int N,M;
    printf("Insira N: ");
    scanf("%d",&N);
    printf("Insira M: ");
    scanf("%d",&M);
    
    int **mat = (int**) calloc(N,sizeof(int*));
    for(int i=0;i<N;i++){
    	mat[i] = (int*) calloc(M,sizeof(int));
	}
	
	srand(time(NULL));
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			mat[i][j] = (rand()%90)+10;
		}
	}
	
	//printf matriz
	printf("\nMatriz:\n");
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	
	printf("\nMaiores Valores da Matriz:\n");
	for(int i=0;i<3;i++){
		lerMaiores(mat,N,M);
	}

    return 0;
}
void lerMaiores(int **mat,int N,int M){
	int maior=-99999,maiorN,maiorM;
	
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			if(mat[i][j]>=maior){
				maior = mat[i][j];
				maiorN = i;
				maiorM = j;
			}
		}
	}
	mat[maiorN][maiorM] = 0;
	
	printf("mat[%d][%d] = %d\n",maiorN,maiorM,maior);
	
}

