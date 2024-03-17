#include <stdio.h>
#include <stdlib.h>

void preenche(int *bloco,int *blocoAnterior,int N);

int main()
{
	int **matriz = (int**) calloc(20,sizeof(int*));
    matriz[0] = (int*) calloc(10,sizeof(int));
	
	int N=10,k=0,i;
    
    for(i=0; ;i++){
    	
		printf("Insira um num (0 termina): ");
    	scanf("%d",&matriz[k][i]);
    	//matriz[k][i]=(rand()%99)+1;
    	//printf("%d ",matriz[k][i]);
		    	
    	if(matriz[k][i]==0){
    		break;
		}
    	
    	if(i+1 == N){
    		
    		matriz[k+1] = (int*) calloc(N+10,sizeof(int));
    		preenche(matriz[k+1],matriz[k],N);
    		
    		free(matriz[k]);
			 
    		N+=10;
			k++;
		}
	}
	
	for(int i2=0;i2<i;i2++){
		printf("%d ",matriz[k][i2]);
	}

    return 0;
}
void preenche(int *bloco,int *blocoAnterior,int N){
	int p=0;

	for(int j=0;j<N;j++){
		bloco[j] = blocoAnterior[p];
		p++;
	}
}

