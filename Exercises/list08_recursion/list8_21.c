#include <stdio.h>

int formula(int n);

int main()
{
	int n;
    printf("Insira um numero POSITIVO: ");
    scanf("%d",&n);
    
    if(n<1){
    	printf("EU DISSE POSITIVO.");
    	return 1;
	}
	
	int ret = formula(n);
	printf("Sequencia(%d) = %d",n,ret);

    return 0;
}

int formula(int n){
	if(n == 1 || n == 2){
		return n;
	}else{
		return 2 * formula(n-1) + 3 * formula(n-2);
	}
}
