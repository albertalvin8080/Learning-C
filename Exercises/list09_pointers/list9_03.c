#include <stdio.h>

int main()
{
    int a,b,*aP,*bP;
    printf("Insira valores para A e B: ");
    scanf("%d%d",&a,&b);
    aP=&a;
    bP=&b;
    
    if(aP>bP){
    	printf("%x",aP);
	}
	else{
		printf("%x",bP);
	}
    
    return 0;
}

