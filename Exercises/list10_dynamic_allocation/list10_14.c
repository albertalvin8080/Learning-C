#include <stdio.h>
#include <stdlib.h>

void lerMatriz(float **m,int l,int c);
void printfMatriz(float **m,int l,int c);

int main()
{
	int l,c;
    printf("Insira quant. linhas: ");
    scanf("%d",&l);
    printf("Insira quant. colunas: ");
    scanf("%d",&c);
    
    float **m = (float**) calloc(l,sizeof(float*));
    
    for(int i=0;i<l;i++){
    	m[i] = (float*) calloc(c,sizeof(float));
	}
	
	lerMatriz(m,l,c);
	printfMatriz(m,l,c);

    return 0;
}
void printfMatriz(float **m,int l,int c){
	printf("\nMatriz:\n");
	for(int i=0;i<l;i++){
		for(int j=0;j<c;j++){
			printf("%.2f ",m[i][j]);
		}
		printf("\n");
	}
}
void lerMatriz(float **m,int l,int c){
	printf("\nInsira (float):\n");
	for(int i=0;i<l;i++){
		for(int j=0;j<c;j++){
			printf("m[%d][%d] = ",i,j);
			scanf("%f",&m[i][j]);
		}
	}
}
