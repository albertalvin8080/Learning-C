#include <stdio.h>
#include <stdlib.h>
#define tam 6

struct mega{
	int bilhete[tam];
	int sorteados[tam];
}info;

int compara(void);
void printfCorretos(int p[],int acertos);

int main()
{
    for(int i=0;i<tam;i++){
   		printf("Insira o %do numero sorteado: ",i+1);
    	scanf("%d",&info.sorteados[i]);
    	for(int j=i-1;j>=0;j--){
    		if(info.sorteados[i]==info.sorteados[j]){
    			printf("Numero repetido. ");
    			i--;
			}
		}
	}
	
	printf("\n");
    for(int i=0;i<tam;i++){
		printf("Agora, o %do numero do bilhete: ",i+1);
    	scanf("%d",&info.bilhete[i]);
    	for(int j=i-1;j>=0;j--){
    		if(info.bilhete[i]==info.bilhete[j]){
    			printf("Numero repetido. ");
    			i--;
			}
		}
	}
	
	int acertos = compara();
	
	int *p = (int*)calloc(acertos,sizeof(int));
	
	printfCorretos(p,acertos);
	
    return 0;
}
void printfCorretos(int p[],int acertos){
	int aux=0;
	
	for(int i=0;i<tam;i++){
		for(int j=0;j<tam;j++){
			if(info.bilhete[i]==info.sorteados[j]){
				p[aux]=info.bilhete[i];
				aux++;
			}
		}
	}
	
	printf("\nSorteados: ");
	for(int i=0;i<tam;i++){
		printf("%d ",info.sorteados[i]);
	}
	
	printf("\nAcertos: ");
	for(int i=0;i<acertos;i++){
		printf("%d ",p[i]);
	}
}
int compara(void){
	int cont=0;
	
	for(int i=0;i<tam;i++){
		for(int j=0;j<tam;j++){
			if(info.bilhete[i]==info.sorteados[j]){
				cont++;
			}
		}
	}
	
	return cont;
}
