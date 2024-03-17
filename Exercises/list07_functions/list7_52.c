#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 3
void transposta(int a[][tam],int b[][tam]);

int main()
{
    int i,j,m[tam][tam],m2[tam][tam];
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
	
	transposta(m,m2);
	printf("\nMatriz transposta: \n");
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
    		printf("%d ",m2[i][j]);
		}printf("\n");
	}
	
    return 0;
}
void transposta(int a[][tam],int b[][tam]){
	int i,j;
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
			b[j][i]=a[i][j];
		}
	}
	
}
