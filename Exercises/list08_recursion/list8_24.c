#include <stdio.h>

int f(int n);

int main()
{
    int n;
    printf("Insira um numero POSITIVO: ");
    scanf("%d",&n);
    
    if(n<1){
    	printf("EU DISSE POSITIVO.");
    	return 1;
	}
	
	int ret = f(n);
	printf("Tribonacci(%d) = %d",n,ret);
	
    return 0;
}

int f(int n){ // Tribonacci
	if(n==0 || n==1){
		return 0;
	}else if(n==2){
		return 1;
	}else{
		return f(n-1) + f(n-2) + f(n-3);
	}
}
