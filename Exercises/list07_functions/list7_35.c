#include <stdio.h>
int fatQuad(int n);
int fatorial(int n);

int main()
{
	int n;
    printf("Insira um numero: ");
    scanf("%d",&n);
    
    int ret=fatQuad(n);
    printf("Fatorial Quraduplo de %d = %d",n,ret);
	
    return 0;
}
int fatQuad(int n){
	int i,fat4,n2=n*2;
	fat4 = fatorial(n2)/fatorial(n);
	return fat4;
}
int fatorial(int n){
	int i,fat=1;
	for(i=2;i<=n;i++){
		fat*=i;
	}return fat;
}
