#include <stdio.h>
int fatorial(int x);

int main()
{
	int n;
    printf("Insira um num: ");
    scanf("%d",&n);
    
    int fator=fatorial(n);
    printf("O fatorial eh: %d",fator);

    return 0;
}
int fatorial(int x){
	int i,fator=1;
	for(i=1;i<=x;i++){
		fator*=i;
	}
	return fator;
}
