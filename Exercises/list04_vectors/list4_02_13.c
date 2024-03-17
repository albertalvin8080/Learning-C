#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define l 4
#define c 4

int main()
{
    int i,j,m[l][c],aux=1;
    
    for(i=0;i<l;++i){
    	for(j=0;j<c;++j){
    		m[i][j]=aux;
    		//aux++;
		}
	}
	for(i=0;i<l;++i){
    	for(j=0;j<c;++j){
    		printf("%d ",m[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<l;++i){
    	for(j=0;j<c;++j){
    		if(j>i){
    			m[i][j]=0;
			}
    		printf("%d ",m[i][j]);
		}
		printf("\n");
	}
	
    return 0;
}

