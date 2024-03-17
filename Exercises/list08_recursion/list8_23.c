#include <stdio.h>

int soma(int v[], int tam);

int main()
{
	int tam = 10;
    int v[] = {1,2,3,9,1,2,6,11,9,3};
	
	int ret = soma(v,tam-1);
	printf("Soma do vetor[%d] = %d",tam,ret);

    return 0;
}

int soma(int v[], int tam){
	if(tam==0){
		return v[tam];
	}else{
		return v[tam] + soma(v,tam-1);
	}
}
