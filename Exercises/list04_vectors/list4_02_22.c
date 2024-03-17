#include <stdio.h>
#include <stdlib.h>
#define l 3
#define c 3

int main()
{
    int i,j,m1[l][c],m2[l][c],mx[l][c];
    
    for(i=0;i<l;i++){
    	for(j=0;j<c;++j){
    		m1[i][j]=(rand()%99)+1;
    		
    		mx[i][j]=m1[i][j]*m1[i][j];
		}
	}
	for(i=0;i<l;i++){
		for(j=0;j<c;++j){
			printf("%d ",mx[i][j]);
		}
		printf("\n");
	}
	
    return 0;
}

