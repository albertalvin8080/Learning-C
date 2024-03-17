#include <stdio.h>

int main()
{
    int i,n[5],*np;
    
    for(i=0;i<5;i++){
    	printf("Insira um valor: ");
    	scanf("%d",&n[i]);
    	np=&n[i];
    	*np*=2;
    	printf("%d\n",*np);
	}
 

    return 0;
}
