#include <stdio.h>
#define tam 3
int negativos(float *vet, int N);

int main()
{
	int i;
	float v[tam];
    printf("Insira %d valores: ",tam);
    for(i=0;i<tam;i++){
    	scanf("%f",&v[i]);
	}
	int contagem=negativos(&v[0],tam);
	printf("Quant. num. negativos: %d",contagem);
    return 0;
}
int negativos(float *vet, int N){
	int j,cont=0;
	for(j=0;j<N;j++){
		if(*vet<0){
			cont++;
		}
		vet++;
	}
	return cont++;
}
