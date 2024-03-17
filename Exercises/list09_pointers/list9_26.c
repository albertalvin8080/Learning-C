#include <stdio.h>
#include <math.h>
int raizes(float A,float B,float C,float * X1,float * X2);

int main()
{
	float a=0.0,b,c,x1,x2;
	printf("-Ax2 + Bx + C = 0-\n");
	while(a<=0.0){
	    printf("Insira a variavel A: ");
	    	scanf("%f",&a);
		if(a<=0.0){
			printf("'A' precisa ser positivo. ");
		}
	}
	printf("Agora a variavel B: ");
	    scanf("%f",&b);
	printf("Agora a variavel C: ");
	    scanf("%f",&c);
	
	int retorno = raizes(a,b,c,&x1,&x2);
	if(retorno==0){
		printf("\nNao existe real. (delta<0)");
	}else if(retorno==1){
		printf("\nRaizes iguais = %.3f",x1);
	}else if(retorno==2){
		printf("\nDuas raizes = %.3f ; %.3f",x1,x2);
	}
	
    return 0;
}
int raizes(float A,float B,float C,float * X1,float * X2){
	float delta;
	delta = B*B - 4*A*C;
	if(delta<0){
		return 0;
	}
	
	*X1 = (-B+sqrt(delta))/(2.0*A);
	*X2 = (-B-sqrt(delta))/(2.0*A);
	
	if(delta>0){
		return 2;
	}else if(delta==0){
		return 1;
	}
}
