#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define tam 5
void desvioP(float v[]);

int main()
{
    int i,j;
	float v[tam];
	srand(time(NULL));
	for(i=0;i<tam;i++){
    	v[i]=(rand()%100)+1;
    	for(j=0;j<i;j++){
    		if(v[i]==v[j]){
    			i--;
    			break;
			}
		}
	}
	
	desvioP(v);
	
    return 0;
}
void desvioP(float v[]){
	int j;
	float soma=0,media,variancia,DP;
	
	for(j=0;j<tam;j++){
		soma += v[j];
	}media = soma / tam;
	
	soma = 0;
	for(j=0;j<tam;j++){
		soma += (v[j]-media)*(v[j]-media);
	}variancia = soma / tam;
	
	DP = sqrt(variancia);
	printf("DP = %f",DP);
}

