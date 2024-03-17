#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 3
int somaAcimaDP(int m[][tam]);

int main()
{
    int i,j,m[tam][tam];
	srand(time(NULL));
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
    		m[i][j]=(rand()%9)+1;	
		}
	}for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
    		printf("%d ",m[i][j]);
		}printf("\n");
	}
	
	int soma=somaAcimaDP(m);
	printf("Soma acima da diagonal principal = %d",soma);
	
    return 0;
}
int somaAcimaDP(int m[][tam]){
	int i,j,soma=0;
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
    		if(i<j){
    			soma+=m[i][j];
			}	
		}
	}return soma;
}
