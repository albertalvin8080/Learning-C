#include <stdio.h>
#define tam 5
int maiorV(int v[]);

int main()
{
    int i,v[tam];
    printf("Insira %d valores: ",tam);
    for(i=0;i<tam;i++){
    	scanf("%d",&v[i]);
	}
	int ret=maiorV(v);
	printf("Maior valor = %d",ret);
	
    return 0;
}
int maiorV(int v[]){
	int j,maior=-2147483647;
	for(j=0;j<tam;j++){
		if(maior<v[j]){
			maior=v[j];
		}
	}return maior;
}
