#include <stdio.h>
void lerNota(float *n1p,float *n2p);
void medias(float *msp,float *mpp,float n1,float n2);

int main()
{
	float n1,n2,ms,mp;
    lerNota(&n1,&n2);
    medias(&ms,&mp,n1,n2);
    printf("Media simples = %.2f\nMedia Ponderada = %.2f",ms,mp);
	
    return 0;
}
void medias(float *msp,float *mpp,float n1,float n2){
	*msp=(n1+n2)/2.0;
	*mpp=(n1+n2*2.0)/3.0;
}
void lerNota(float *n1p,float *n2p){
	float n1=-1,n2=-1;
	while(n1<0 || n1>10.0){
		printf("Insira uma nota: ");
		scanf("%f",&n1);
		if(n1<0 || n1>10.0){
			printf("Nota invalida. ");
		}
	}while(n2<0 || n2>10.0){
		printf("Insira outra nota: ");
		scanf("%f",&n2);
		if(n2<0 || n2>10.0){
			printf("Nota invalida. ");
		}
	}*n1p=n1; *n2p=n2;
}
