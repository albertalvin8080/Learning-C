#include <stdio.h>
#include <stdlib.h>
#define n 2
void lerFrac(int p[],int q[]);
void opera(int p[],int q[]);
int MDC(int x[]);

int main()
{
	int op,p[n],q[n];
	
    lerFrac(p,q);
	opera(p,q);
	int divP = MDC(p);
	int divQ = MDC(q);
	
	printf("\nMDC de (p) = %d\n",divP);
	printf("MDC de (q) = %d",divQ);
	
    return 0;
}
void lerFrac(int p[],int q[]){
	printf("Insira o Numerador da fracao (p): ");
		scanf("%d",&p[0]);
	printf("Agora o Denomiador da fracao (p): ");
		scanf("%d",&p[1]);
	printf("Insira o Numerador da fracao (q): ");
		scanf("%d",&q[0]);
	printf("Agora o Denomiador da fracao (q): ");
		scanf("%d",&q[1]);
}
void opera(int p[],int q[]){
	float pr,qr;
	pr = (float) p[0]/p[1];
	qr = (float) q[0]/q[1];
	
	float soma = pr+qr;
	float produto = pr*qr;
	float subtracao = pr-qr;
	float quociente = pr/qr;
	
	printf("\n---Operacoes---\n");
	printf("Soma = %.3f\n",soma);
	printf("Produto = %.3f\n",produto);
	printf("Subtracao = %.3f\n",subtracao);
	printf("Quociente = %.3f\n",quociente);
}
int MDC(int x[]){
	int i=2,div[100]={1},aux=0,prod=1;
	while(1<x[0] && 1<x[1]){
		if(x[0]%i==0 && x[1]%i==0){
			x[0]/=i;
			x[1]/=i;
			div[aux]=i;
			aux++;
		}else if(x[0]%i!=0 && x[1]%i==0){
			x[1]/=i;
		}else if(x[0]%i==0 && x[1]%i!=0){
			x[0]/=i;
		}
		if(x[0]%i!=0 && x[1]%i!=0){
			i++;
		}
	}
	for(i=0;i<aux;i++){
		prod*=div[i];
	}return prod;
}
