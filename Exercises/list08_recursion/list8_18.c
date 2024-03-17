#include <stdio.h>

int interna(int n);
int SuperFat(int n);

int main()
{
	int n;
    printf("Insira um numero POSITIVO: ");
    scanf("%d",&n);
    
    if(n<0){
    	printf("EU DISSE POSITIVO.");
    	return 1;
	}
	
	int super = SuperFat(n);
	printf("Super Fatorial (n=%d) = %d",n,super);
	
    return 0;
}

int SuperFat(int n){
	if(n==1 || n==0){
		return 1;
	}else{
		return interna(n) * SuperFat(n-1);
	}
}

int interna(int n){    // fatorial comum
	if(n==1 || n==0){
		return 1;
	}else{
		return n * interna(n-1);
	}
}

	
