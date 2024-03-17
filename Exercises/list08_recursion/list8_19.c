#include <stdio.h>

int hiperFat(int n);
int interno(int n,int e);

int main()
{
	int n;
    printf("Insira um numero POSITIVO: ");
    scanf("%d",&n);
    
    if(n<0){
    	printf("EU DISSE POSITIVO.");
    	return 1;
	}
	
	printf("H(%d) = %d",n,hiperFat(n));
	
    return 0;
}

int hiperFat(int n){
	if(n==1 || n==0){
		return 1;
	}else{
		return interno(n,n) * hiperFat(n-1);
	}
}

int interno(int n,int e){
	if(e==1){
		return n;
	}else{
		return n * interno(n,e-1);
	}
}
