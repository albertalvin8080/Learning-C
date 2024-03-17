#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define l 7
#define c 6
int somaLinha(int m[l][c],int n);

int main()
{
    int i,j,m[l][c],n;
	srand(time(NULL));
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
    		m[i][j]=(rand()%9)+1;	
		}
	}n=(rand()%6);
	
	int soma=somaLinha(m,n);
	printf("\nSoma da coluna %d = %d\n\n",n,soma);
	
    return 0;
}
int somaLinha(int m[l][c],int n){
	int i,j,soma=0;
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
    		printf("%d ",m[i][j]);
		}
		if(n==i){
			printf("<-");
		}
		printf("\n");
	}
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			if(i==n){
				soma+=m[i][j];
			}
		}
		
	}return soma;
}
