#include <stdio.h>
#include <stdlib.h>
#define l 3
#define c 6

int main()
{
    int i,j,aux=0;
	float m[l][c],somaI=0,somaM=0,media24;
    
    for(i=0;i<l;++i){
    	for(j=0;j<c;++j){
    		m[i][j]=(rand()%100);
    		if((j+1)%2!=0){
    			somaI+=m[i][j];
			}
			if((j+1)==2 || (j+1)==4){
				somaM+=m[i][j];
				aux++;
			}
		}
	}
	media24 = (float) somaM/aux;
	printf("Soma dos valores das colunas impares = %.f\n",somaI);
	printf("Media dos valores das colunas 2 e 4 = %.1f\n",media24);
	for(i=0;i<l;i++){
		j=0;
		m[i][5]=m[i][j]+m[i][j+1];
	}
	for(i=0;i<l;++i){
		for(j=0;j<c;++j){
			printf("%.1f ",m[i][j]);
		}
		printf("\n");
	}
	
    return 0;
}
