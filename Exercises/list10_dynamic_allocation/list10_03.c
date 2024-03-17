#include <stdio.h>
#include <stdlib.h>

int main()
{
	int tam;
    printf("Insira o tamanho do vetor: ");
    scanf("%d",&tam);
	
	int *p = (int*) calloc(tam,sizeof(int));
	
	int par=0,impar=0;
	for(int i=0;i<tam;i++){
		printf("Insira o valor p%d: ",i);
		scanf("%d",&p[i]);
		if(p[i]%2==0){
			par++;
		}else{
			impar++;
		}
	}
	printf("\nQuant. pares: %d\nQuant. Impares: %d",par,impar);

    return 0;
}

