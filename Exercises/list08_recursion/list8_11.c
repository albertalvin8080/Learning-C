#include <stdio.h>

void exibe(int *n,int tam);

int main()
{
    int tam = 7;
	int n[] = {3,4,5,6,7,99,675};
    
    exibe(n,tam-1);

    return 0;
}

void exibe(int *n,int tam){
	if(tam==0){
		printf("%d ",n[tam]);
	}else{
		exibe(n,tam-1);
		printf("%d ",n[tam]);
	}
}
