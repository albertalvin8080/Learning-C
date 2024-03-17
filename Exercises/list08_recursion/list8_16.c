#include <stdio.h>

int fatDuplo(int n);

int main()
{
	int n;
    printf("Insira um numero IMPAR: ");
	scanf("%d",&n);
	
	if(n%2==0){
		printf("EU DISSE IMPAR.");
		return 1;
	}
	
	printf("%d!! = %d",n,fatDuplo(n));
	
    return 0;
}

int fatDuplo(int n){
	if(n==1){
		return 1;
	}else{
		return n * fatDuplo(n-2);
	}
}
