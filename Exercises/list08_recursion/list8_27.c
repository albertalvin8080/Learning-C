#include <stdio.h>

int h(int n,int m);

int main()
{
    int n,m;
    printf("Insira n: ");
    scanf("%d",&n);
    printf("Insira m: ");
    scanf("%d",&m);
    
    if(n<1 || m<1){
    	printf("m e n NAO PODEM SER MENORES QUE 1.");
    	return 1;
	}
	
	int ret = h(n,m);
	printf("h(%d,%d) = %d",n,m,ret);

    return 0;
}

int h(int n,int m){
	if(n==1){
		return m+1;
	}else if(m==1){
		return n+1;
	}else{
		return h(n-1,m) + h(n,m-1);
	}
}
