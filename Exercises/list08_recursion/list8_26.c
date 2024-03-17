#include <stdio.h>

int p(int n);

int main()
{
    int n;
    printf("Insira um numero POSITIVO: ");
    scanf("%d",&n);
    
    if(n<0){
    	printf("EU DISSE POSITIVO.");
    	return 1;
	}
	
	int ret = p(n);
	printf("Padovan(%d) = %d",n,ret);
	
    return 0;
}

int p(int n){ // Sequencia de Padovan
	if(n==0 || n==1 || n==2){
		return 1;
	}else{
		return p(n-2) + p(n-3);
	}
}
