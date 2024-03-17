#include <stdio.h>
void triangulo(int n);

int main()
{
	int n;
    printf("Insira um num: ");
    scanf("%d",&n);
    
    triangulo(n);

    return 0;
}
void triangulo(int n){
	int i,j,b = 2*n-1;
	int aux1 = 2*n/2, aux2 = 2*n/2;
	
	for(i=1;i<=n;i++){
		for(j=1;j<=b;j++){
			if(j<aux1 || j>aux2){
				printf(" ");
			}else{
				printf("*");
			}
		}
		aux1--;
		aux2++;
		printf("\n");
	}
}
