#include <stdio.h>
#define tam 5
int compara(int v[]);

int main()
{
	int i,v[tam];
    printf("Insira 5 numeros: ");
    for(i=0;i<tam;i++){
    	scanf("%d",&v[i]);
	}
	
	int maior = compara(v);
	printf("Maior numero = %d",maior);

    return 0;
}
int compara(int v[]){
	int j,maior=-2147483647;
	
	for(j=0;j<tam;j++){
		if(v[j]>maior){
			maior=v[j];
		}
	}
	
	return maior;
}
