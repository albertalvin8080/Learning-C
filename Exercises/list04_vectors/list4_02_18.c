#include <stdio.h>
#include <stdlib.h>
#define l 3
#define c 3

int main()
{
    int i,j,m[l][c],soma[3]={0},aux=0;
    
    for(i=0;i<l;++i){
    	aux=0;
    	printf("Insira 3 numeros: ");
    	for(j=0;j<c;j++){
    		scanf("%d",&m[i][j]);
    		soma[0+aux]+=m[i][j];
    		aux++;
		}
	}
	printf("\nSoma das colunas: ");
	for(i=0;i<l;++i){
    	/*for(j=0;j<c;j++){
    		printf("%d ",m[i][j]);
		}*/
		printf("%d ",soma[i]);
	}

    return 0;
}

