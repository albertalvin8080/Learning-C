#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 4
void produto(int a[][tam],int b[][tam],int c[][tam]);

int main()
{
    int i,j,a[tam][tam],b[tam][tam],c[tam][tam];
	srand(time(NULL));
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
    		a[i][j]=(rand()%9)+1;
			b[i][j]=(rand()%9)+1;	
		}
	}
	produto(a,b,c);
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
			printf("%d ",c[i][j]);
		}printf("\n");
	}
    return 0;
}
void produto(int a[][tam],int b[][tam],int c[][tam]){
	int i,j;
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
			c[i][j]=a[i][j]*b[i][j];
		}
	}
	
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
			printf("%d ",a[i][j]);
		}printf("\n");
	}printf("\n");
	
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
			printf("%d ",b[i][j]);
		}printf("\n");
	}printf("\n");
}
