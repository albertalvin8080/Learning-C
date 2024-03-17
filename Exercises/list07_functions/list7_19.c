#include <stdio.h>
int fatorPrimo(int x);

int main()
{
    int n;
    printf("Insira um num: ");
    scanf("%d",&n);
    
    int fator=fatorPrimo(n);
    printf("O maior fator primo de %d eh: %d",n,fator);

    return 0;
}
int fatorPrimo(int x){
	int primo=2,MaiorPrimo;
	
	while(primo<=x){
		if(x%primo==0){
			x/=primo;
			MaiorPrimo=primo;
		}
		else{
			primo++;
		}
	}
	return MaiorPrimo;
}
