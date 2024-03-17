#include <stdio.h>
#define tam 5
float mediaV(float v[]);

int main()
{
    int i,v[tam];
    printf("Insira %d valores: ",tam);
    for(i=0;i<tam;i++){
    	scanf("%d",&v[i]);
	}
	float ret=mediaV(v);
	printf("Media dos valores = %.2f",ret);
	
    return 0;
}
float mediaV(float v[]){
	int j;
	float media=0;
	for(j=0;j<tam;j++){
		media+=v[j];
	}media /= tam;
	return media;
}
