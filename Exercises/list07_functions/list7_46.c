#include <stdio.h>
#include <stdlib.h>
#define tam 5
void Inormal(float v[]);
void Iinversa(float v[]);
void mediaAr(float v[]);

int main()
{
    int i,j,op;
	float v[tam];

	for(i=0;i<tam;i++){
    	printf("Insira %d valores: ",tam);
    	scanf("%f",&v[i]);
	}
	printf("Escolha uma opcao:\n\t(1)Impressao normal do vetor\n\t");
	printf("(2)Impressao inversa do vetor\n\t");
	printf("(3)Media aritmetica do vetor\n\t");
	scanf("%d",&op);
	
	switch(op){
		case 1:
			Inormal(v);
			break;
		case 2:
			Iinversa(v);
			break;
		case 3:
			mediaAr(v);
			break;
	}
	
    return 0;
}
void Inormal(float v[]){
	for(int i=0;i<tam;i++){
		printf("%.2f ",v[i]);
	}
}
void Iinversa(float v[]){
	for(int i=tam-1;i>=0;i--){
		printf("%.2f ",v[i]);
	}
}
void mediaAr(float v[]){
	float media=0;
	for(int i=0;i<tam;i++){
		media+=v[i];
	}media/=tam;
	printf("Media Aritmetica = %.2f",media);
}
