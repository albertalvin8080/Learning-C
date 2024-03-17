#include <stdio.h>

int main()
{
    int i,j;
    float n[3][3],*np;
    
    for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
    		np=&n[i][j];
    		printf("%x\n",np);
		}
	}

    return 0;
}
