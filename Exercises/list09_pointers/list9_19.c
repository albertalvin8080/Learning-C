#include <stdio.h>
#define tam 9
void conta(int v[],int *numP,int *contP);

int main()
{
    int i,v[tam],num,cont=0;
    
	printf("Insira %d numeros: ",tam);
	for(i=0;i<tam;i++){
		scanf("%d",&v[i]);
	}
	conta(v,&num,&cont);
	printf("Numero: %d\nQuant: %d",num,cont);
    return 0;
}
void conta(int v[],int *numP,int *contP){
	int j,k,aux;
	for(j=0;j<tam;j++){
		aux=1;
		for(k=j+1;k<tam;k++){
			if(v[j]==v[k]){
				aux++;
			}
			if(aux>*contP){
				*contP=aux;
				*numP=v[j];
			}
		}
	}
}
