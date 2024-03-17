#include <stdio.h>

int SomaSerie(int i, int j, int k);

int main()
{
	int i,j,k;
    printf("Insira 'i': ");
    	scanf("%d",&i);
    printf("Insira 'j': ");
    	scanf("%d",&j);
    printf("Insira 'k': ");
    	scanf("%d",&k);
	
	printf("Soma da serie = %d",SomaSerie(i,j,k));
	
    return 0;
}

int SomaSerie(int i, int j, int k){
	if(i>j){
		return 0;
	}else if(j==i){
		return i;
	}else{
		return i + SomaSerie(i+k,j,k);
	}
}

