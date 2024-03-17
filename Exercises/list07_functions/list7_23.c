#include <stdio.h>
void triangulo(int x);

int main()
{
	int n;
    printf("Insira um num: ");
    scanf("%d",&n);
    
    triangulo(n);

    return 0;
}
void triangulo(int x){
	int i,j,aux=1;
	int h = 2*x-1;
	for(i=1;i<=h;i++){
		if(i<=x){
			for(j=1;j<=i;j++){
				printf("*");
			}
		}
		else if(i>x){
			for(j=x-aux;j>=1;j--){
				printf("*");	
			}
			aux++;
		}
		printf("\n");
	}
}
