#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 4
int maior10(int v[][tam]);

int main()
{
    int i,j,v[tam][tam];
	srand(time(NULL));
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
    		v[i][j]=(rand()%20)+1;	
		}
	}
	
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
    		printf("%d ",v[i][j]);
		}printf("\n");
	}
	
	int ret=maior10(v);
	printf("\nQuant. de num. maiores que 10: %d",ret);
	
    return 0;
}
int maior10(int v[][tam]){
	int i,j,cont=0;
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
    		if(v[i][j]>10){
    			cont++;
			}	
		}
	}return cont;
}
