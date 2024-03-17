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
	
	int menor = compara(v);
	printf("Menor numero = %d",menor);

    return 0;
}
int compara(int v[]){
	int j,menor=2147483647;
	
	for(j=0;j<tam;j++){
		if(v[j]<menor){
			menor=v[j];
		}
	}
	
	return menor;
}
