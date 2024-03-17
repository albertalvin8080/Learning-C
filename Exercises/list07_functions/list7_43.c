#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 5
void arrayAleat(int v[]);

int main()
{
    int i,v[tam]={0};
    arrayAleat(v);
    
    for(i=0;i<tam;i++){
    	printf("%d ",v[i]);
	}

    return 0;
}
void arrayAleat(int v[]){
	int i,j;
	srand(time(NULL));
	for(i=0;i<tam;i++){
    	v[i]=(rand()%100)+1;
    	for(j=0;j<i;j++){
    		if(v[i]==v[j]){
    			i--;
    			break;
			}
		}
	}
}
