#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N=20;
    int *v = (int*) malloc(N*sizeof(int));
    
    printf("Insira %d valores: ",N);
    for(int i=0;i<N;i++){
    	scanf("%d",&v[i]);
	}
	
	printf("Vetor alocado: ");
	for(int i=0;i<N;i++){
    	printf("%d ",v[i]);
	}

    return 0;
}
