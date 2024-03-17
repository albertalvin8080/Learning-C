#include <stdio.h>
#include <stdlib.h>

double elevado(double b,double e);
double fatExp(double n, double b, double e);

int main()
{
	double n;
	double base = 1, expoente = 0;
	
    printf("Insira um numero POSITIVO: ");
    scanf("%lf",&n);
    
    if(n<1){
    	printf("EU DISSE POSITIVO.");
    	return 1;
	}
	
	printf("Fatorial Exponencial(%.lf) = %.lf",n,fatExp(n,base,expoente));
	//printf("\n%d",4*4*4*4*4*4*4*4*4);
	
    return 0;
}

double fatExp(double n, double b, double e){
	if(b <= n){
		e = elevado(b,e);
		fatExp(n,b+1,e);
	}else{
		return e;
	}
}

double elevado(double b,double e){
	if(e == 0){
		return 1;
	}else{
		return b * elevado(b,e-1);
	}
}

