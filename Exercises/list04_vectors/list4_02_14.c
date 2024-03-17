#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define l 5
#define c 5

int main()
{
    int i,j,k,a,m[l][c],aux=0;
    
    //srand(time(NULL)); altera a seed
    
    for(i=0;i<l;++i){
    	for(j=0;j<c;++j){
    		m[i][j] = rand() % 100;
    		for(k=0;k<=i;k++){
    			aux=0;
				for(a=0;a<c;a++){
					if(k==i && a==j){
						break;
					}
					if(m[k][a]==m[i][j]){
						j--;
						aux=1;
						break;
					}
				}
				if(aux==1){
					break;
				}
			}
		}
	}
	for(i=0;i<l;++i){
    	for(j=0;j<c;++j){
    		printf("%d ",m[i][j]);
		}
		printf("\n");
	}
	
	
    return 0;
}
