#include <stdio.h>
#include <stdlib.h>

void lerMatriz(int **mat,int l,int c);
int checaExistencia(int **mat,int l,int c);

int main()
{
	int i,j;
	char c,l;
	
	printf("Insira quant. linhas: ");
		scanf("%d",&l);
    printf("Insira quant. colunas: ");
    	scanf("%d",&c);
	
	int **mat = (int**) calloc(l,sizeof(int*));
	
	for(i=0;i<l;i++){
		mat[i] = (int*) calloc(c,sizeof(int));
	}
	
	lerMatriz(mat,l,c);
	int retorno = checaExistencia(mat,l,c);
	
	if(retorno==0){
		printf("O numero NAO existe na matriz.");
	}else{
		printf("O numero existe na matriz.");
	}
	
    return 0;
}
int checaExistencia(int **mat,int l,int c){
	int n;
	printf("\nInsira um num: ");
	scanf("%d",&n);
	
	for(int i=0;i<l;i++){
		for(int j=0;j<c;j++){
			if(mat[i][j]==n){
				return 1;
			}
		}
	}
	return 0;
}
void lerMatriz(int **mat,int l,int c){
	printf("\n");
	for(int i=0;i<l;i++){
		for(int j=0;j<c;j++){
			printf("Insira mat[%d][%d]: ",i,j);
			scanf("%d",&mat[i][j]);
		}
	}
}

