#include <stdio.h>

void ImprimeSerie(int i, int j, int k);

int main()
{
	int i,j,k;
    printf("Insira 'i': ");
    	scanf("%d",&i);
    printf("Insira 'j': ");
    	scanf("%d",&j);
    printf("Insira 'k': ");
    	scanf("%d",&k);
	
	ImprimeSerie(i,j,k);
	
    return 0;
}

void ImprimeSerie(int i, int j, int k){
	if(j<i){
		// vazio
	}else if(j==i){
		printf("%d ",i);
	}else{
		printf("%d ",i);
		ImprimeSerie(i+k,j,k);
	}
}

