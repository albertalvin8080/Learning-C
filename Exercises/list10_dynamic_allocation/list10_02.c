#include <stdio.h>
#include <stdlib.h>

int main()
{
	int tam;
    printf("Insira o tamanho do vetor: ");
    scanf("%d",&tam);
	
	int *vp = (int*)calloc(tam,sizeof(int));
	
	for(int i=0;i<tam;i++){
		printf("Insira o valor vp%i: ",i);
		scanf("%d",&vp[i]);
	}
	
	for(int i=0;i<tam;i++){
		printf("%d ",vp[i]);
	}

    return 0;
}

