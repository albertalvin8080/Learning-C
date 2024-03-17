#include <stdio.h>

int main()
{
	int i;
    float n[10],*np;
    
    for(i=0;i<10;i++){
    	np=&n[i];
    	printf("%x\n",np);
	}

    return 0;
}
