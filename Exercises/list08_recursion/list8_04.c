#include <stdio.h>

int elevado(int k,int n);

int main()
{
	int k,n;
    printf("Insira k e depois n: ");
    scanf("%d%d",&k,&n);

	printf("%d^%d = %d",k,n,elevado(k,n));

    return 0;
}

int elevado(int k,int n){
	if(n==0){
		return 1;
	}else{
		return k * elevado(k,n-1);
	}
}
