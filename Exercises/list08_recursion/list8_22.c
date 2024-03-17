#include <stdio.h>

int fibg(int f0,int f1,int n);

int main()
{
    int n;
    printf("Insira um numero POSITIVO: ");
    scanf("%d",&n);
    
    if(n<1){
    	printf("EU DISSE POSITIVO.");
    	return 1;
	}
	
	int ret = fibg(0,1,n);
	printf("fibg(n=%d) = %d",n,ret);

    return 0;
}

int fibg(int f0,int f1,int n){
	if(n==0){
		return f0;
	}else if(n==1){
		return f1;
	}else{
		return fibg(f0,f1,n-1) + fibg(f0,f1,n-2);
	}
}
