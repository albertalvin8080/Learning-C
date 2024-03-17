#include <stdio.h>
#define n 5
typedef struct{
	char sexo,olho,cabelo;
	int idade;
}caracteristicas;

void ler(caracteristicas info[]);
int sexoFem(caracteristicas info[]);
int maiorIdade(caracteristicas info[]);
float mediaIdade(caracteristicas info[]);

int main()
{
	int i=0;
	caracteristicas info[n];
    ler(info);
    float media = mediaIdade(info);
    int IdaMaior = maiorIdade(info);
    int fem = sexoFem(info);
    
	printf("\nMaior idade (anos) = %d\n",IdaMaior);
	printf("Quant. de mulheres loiras de olhos azuis = %d\n",fem);
	printf("Media de idade (pessoas de olhos castanhos + cabelo preto) = %.2f",media);
	
    return 0;
}
int sexoFem(caracteristicas info[]){
	int cont=0;
	for(int i=0;i<n;i++){
		if((info[i].sexo=='F'||info[i].sexo=='f') &&
		(info[i].idade>=18 && info[i].idade<=35) &&
		(info[i].olho=='A'||info[i].olho=='a') &&
		(info[i].cabelo=='L'||info[i].cabelo=='l')){
			cont++;
		}
	}return cont;
}
int maiorIdade(caracteristicas info[]){
	int maior=1;
	for(int i=0;i<n;i++){
		if(maior<info[i].idade){
			maior=info[i].idade;
		}
	}return maior;
}
float mediaIdade(caracteristicas info[]){
	float soma=0,media=0,cont=0;
	for(int i=0;i<n;i++){
		if((info[i].olho=='C'||info[i].olho=='c') &&
		(info[i].cabelo=='P'||info[i].cabelo=='p')){
			soma+=info[i].idade;
			cont++;
		}
	}if(cont==0){
		return 0;
	}media = soma/cont;
	return media;
}
void ler(caracteristicas info[]){
	int i,aux=0;
	for(i=0;i<n;i++){
		while(aux==0){
			printf("Insira o sexo da %do pessoa (M/F): ",i+1);
			scanf("%c%*c",&info[i].sexo);
			if(info[i].sexo=='M'||info[i].sexo=='F'||
			   info[i].sexo=='m'||info[i].sexo=='f'){
				aux=1;
			}else{
				printf("SEXO INVALIDO. ");
			}
		}aux=0;
		while(aux==0){
			printf("Cor dos olhos (A-azuis/C-castanhos): ");
			scanf("%c%*c",&info[i].olho);
			if(info[i].olho=='A'||info[i].olho=='C'||
			   info[i].olho=='a'||info[i].olho=='c'){
				aux=1;
			}else{
				printf("COR INVALIDA. ");
			}
		}aux=0;
		while(aux==0){
			printf("Cor do cabelo (L-Louros/P-Pretos/C-Castanhos): ");
			scanf("%c%*c",&info[i].cabelo);
			if(info[i].cabelo=='L'||info[i].cabelo=='P'||info[i].cabelo=='C'||
			   info[i].cabelo=='l'||info[i].cabelo=='p'||info[i].cabelo=='c'){
				aux=1;
			}else{
				printf("COR INVALIDA. ");
			}
		}aux=0;
		while(aux==0){
			printf("Idade: ");
			scanf("%d%*c",&info[i].idade);
			if(info[i].idade>0){
				aux=1;
			}else{
				printf("IDADE INVALIDA. ");
			}
		}aux=0;
		//printf("%c\n%c\n%c\n%d\n",info[i].sexo,info[i].olho,info[i].cabelo,info[i].idade);
	}
}
