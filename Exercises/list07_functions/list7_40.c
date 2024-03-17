#include <stdio.h>
#define tam 5
int pares(int v[]);

int main()
{
	int i,v[tam];
    printf("Insira %d valores: ",tam);
    for(i=0;i<tam;i++){
    	scanf("%d",&v[i]);
	}
	
	int resul = pares(v);
	printf("O array tem %d numeros pares.",resul);
	
    return 0;
}
int pares(int v[]){
	int j,cont=0;
	for(j=0;j<tam;j++){
		if(v[j]%2==0){
			cont++;
		}
	}return cont;
}
