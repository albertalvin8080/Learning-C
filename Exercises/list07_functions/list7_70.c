#include <stdio.h>
#define n 2
struct racional{
	int p, q;
}info[n]; 
float negacao(float x);
float reduz(int a, int b);
float somar(float x,float y);
float quociente(float x,float y);
float multiplica(float x, float y);

int main()
{
	info[0].q=0;info[1].q=0;
	for(int i=0;i<n;i++){
	    printf("Insira o numerador(p)[%d]: ",i);
	    scanf("%d",&info[i].p);
		printf("Agora o denominador(q)[%d]: ",i);
	    while(info[i].q<1){
		    scanf("%d",&info[i].q);
	    	if(info[i].q<1){
	    		printf("Numero invalido. Tente novamente: ");
			}
		}
	}
	
    float div1 = reduz(info[0].p,info[0].q);
    float neg1 = negacao(div1);
    float div2 = reduz(info[1].p,info[1].q);
    float neg2 = negacao(div2);
    
    float soma = somar(div1,div2);
    float mult = multiplica(div1,div2);
    float divisao = quociente(div1,div2);
	
	printf("\nRacional de %d/%d = %.3f",info[0].p,info[0].q,div1);
	printf("\nNegacao = %.3f\n",neg1);
	printf("\nRacional de %d/%d = %.3f",info[1].p,info[1].q,div2);
	printf("\nNegacao = %.3f\n",neg2);
	printf("\nSoma (x,y) = %.3f\n",soma);
	printf("Produto (x,y) = %.3f\n",mult);
	printf("Quociente (x,y) = %.3f",divisao);
	
    return 0;
}
float quociente(float x,float y){
	return x/y;
}
float multiplica(float x, float y){
	return x*y;
}
float somar(float x,float y){
	return x+y;
}
float negacao(float x){
	return x*(-1);
}
float reduz(int a, int b){
	float div = (float) a / b;
	return div;
}
