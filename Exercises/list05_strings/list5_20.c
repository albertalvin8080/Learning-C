#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,consumo[5]={0},maior=0;
    float pormil[5]={0};
    char modelo[5][20]={0},econ[10];
    
    for(i=0;i<5;++i){
    	printf("Insira o modelo %d: ",i+1);
    	scanf("%20[^\n]",modelo[i]);
    	//fgets(modelo[i],10,stdin);
		
		printf("Agora digite o consumo (km/l): ");
		scanf("%d%*c",&consumo[i]);
	}
	
	for(i=0;i<5;++i){
		if(consumo[i]>maior){
			maior=consumo[i];
			strcpy(econ,modelo[i]);
		}
		pormil[i] = (float) 1000.0/consumo[i];
	}
	printf("Modelo mais economico: %s",econ);
	printf("\n Consumo = %d",maior);
	for(i=0;i<5;++i){
		printf("\nO modelo %s consome %.2fL em 1000km",modelo[i],pormil[i]);
	}
    return 0;
}


