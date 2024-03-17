#include <stdio.h>
#define pi 3.141593
#define n 5
double fatorial(int aux);
double coshTaylor(double an);
double expoente(double x,int aux);

int main()
{
	double an;
    printf("Insira um angulo em graus: ");
    scanf("%lf",&an);
    
    double equacao = coshTaylor(an);
    printf("Cosseno Hiperbolico de %.2lf = %.20lf",an,equacao);
    
    return 0;
}
double coshTaylor(double an){
	double x = an * (pi/180.0); //angulo em radianos
	int i,aux=2;
	double operacao=1; //n pode iniciar em 1 pois 'operacao' ja possui o valor de 1
	
	for(i=1;i<=n;i++){
		operacao += expoente(x,aux) / fatorial(aux);
		aux+=2;
	}return operacao;
	
}
double expoente(double x,int aux){
	int j;
	double potencia=1;
	for(j=1;j<=aux;j++){
		potencia*=x;
	}return potencia;
}
double fatorial(int aux){
	int j;
	double fator=1;
	for(j=1;j<=aux;j++){
		fator*=j;
	}return fator;
}
