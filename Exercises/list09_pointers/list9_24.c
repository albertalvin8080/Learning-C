#include <stdio.h>
void func(int v[],int tam,int *pmin,int *pmax);

int main()
{
    int i,min=99999,max=-99999,tam;
    
    printf("Insira o tamanho do array: ");
    scanf("%d",&tam);
    int v[tam];
    printf("Agora os valores: ");
    for(i=0;i<tam;i++){
    	scanf("%d",&v[i]);
	}
    
    func(v,tam,&min,&max);
    printf("Valor max = %d\nValor min = %d",max,min);

    return 0;
}
void func(int v[],int tam,int *pmin,int *pmax){
	int i;
	for(i=0;i<tam;i++){
		if(v[i]<*pmin){
			*pmin=v[i];
		}if(v[i]>*pmax){
			*pmax=v[i];
		}
	}
}
