#include <stdio.h>

int menorNum(int *n,int tam,int indice);

int main()
{
    int tam = 7;
	int n[] = {3,-124,5,-11,7,99,675};
    
    int menor = menorNum(n,tam-1,0);
    printf("Menor num do vetor: %d",menor);

    return 0;
}

int menorNum(int n[], int tam, int indice){
	if(tam==0){
		return n[indice];
	}else{
		if(n[tam] < n[indice]){
			return menorNum(n,tam-1,tam);
		}else{
			return menorNum(n,tam-1,indice);
		}
	}
}

