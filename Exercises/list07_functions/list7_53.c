#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 3
int identidade(int m[][tam]);

int main()
{
    int i,j,m[tam][tam];
	srand(time(NULL));
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
    		printf("[%d][%d] = ",i,j);
    		scanf("%d",&m[i][j]);
		}
	}for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
    		printf("%d ",m[i][j]);
		}printf("\n");
	}
	int ret=identidade(m);
	if(ret==1){
		printf("Eh uma matriz identidade.");
	}else{
		printf("Nao eh matriz identidade.");
	}
	
    return 0;
}
int identidade(int m[][tam]){
	int i,j;
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
			if(i!=j && m[i][j]!=0){
				return 0;
			}
			else if(i==j && m[i][j]!=1){
				return 0;
			}
		}
	}return 1;
}
