#include <stdio.h>
int primosAb(int x);

int main()
{
	int n;
    printf("Insira um num: ");
    scanf("%d",&n);
    
    int primo = primosAb(n);
    printf("%d primos abaixo de %d",primo,n);

    return 0;
}
int primosAb(int x){
	int i,j,cont=0,primo=0;
	
	for(i=1;i<x;i++){
		for(j=1,cont=0;j<=i;j++){
			if(i%j==0){
				cont++;
			}
		}
		if(cont==2){
			primo++;
		}
	}
	return primo;
}
