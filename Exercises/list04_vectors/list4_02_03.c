#include <stdio.h>

int main()
{
    int m[10][10],i,j;

    for(i=0;i<10;++i){
    	for(j=0;j<10;++j){
    		m[i][j]=i*j;
    		printf("%d ",m[i][j]);
		}
		printf("\n");
	}

    return 0;
}
