#include <stdio.h>

int main()
{
    int i,n[5],*np;
    
    for(i=0;i<5;i++){
    	printf("Insira um valor: ");
    	scanf("%d",&n[i]);
	}
	for(i=0;i<5;i++){
		if(n[i]%2==0){
			printf("%d\n",&n[i]);
		}
	}
 

    return 0;
}
