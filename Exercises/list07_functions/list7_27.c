#include <stdio.h>
#define pi 3.141593
#define n 5
double fatorial(int aux);
double senTaylor(double an);
double expoente(double x,int aux);

int main()
{
	double an;
    printf("Insira um angulo em graus: ");
    scanf("%lf",&an);
    
    double equacao = senTaylor(an);
    printf("Seno de %.2lf = %.20lf",an,equacao);
    
    return 0;
}
double senTaylor(double an){
	double x = an * (pi/180.0); //angulo em radianos
	int i,aux=3;
	double operacao=x; //n pode iniciar em 1 pois 'operacao' ja possui o valor de x
	
	for(i=1;i<=n;i++){
		if(i%2!=0){
			operacao -= expoente(x,aux) / fatorial(aux);
		}else{
			operacao += expoente(x,aux) / fatorial(aux);
		}
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
