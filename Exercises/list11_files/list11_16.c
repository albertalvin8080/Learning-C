#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam 10

void binario(int v[]);
void limparFILE(void);
void escrever(int bin[],int aux);

int main()
{
    int v[tam];
    for(int i=0;i<tam;i++){
    	printf("Insira o %do numero: ",i+1);
    	scanf("%d",&v[i]);
	}
	limparFILE();
	binario(v);

    return 0;
}
void binario(int v[]){
	char str[100];
	int aux,bin[200];
	
	for(int i=0;i<tam;i++){
		aux=0;
		while(v[i]>0){
			bin[aux]=v[i]%2;
			v[i]/=2;
			aux++;
		}
		escrever(bin,aux);
	}
}
void limparFILE(void){
	FILE *f;
	f=fopen("binario.txt","w");
	fclose(f);
}
void escrever(int bin[],int aux){
	FILE *f;
	f=fopen("binario.txt","a");
	
	if(f==NULL){
		printf("\nFalha ao escrever arquivo.");
		exit(1);
	}
	
	for(int j=aux-1;j>=0;j--){
		fprintf(f,"%d",bin[j]);
		//printf("%d",bin[j]);
	}
	fprintf(f,"\n");
	
	fclose(f);
}
