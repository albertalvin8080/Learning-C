#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = (int*) calloc(1500,sizeof(int));
    
    int i;
    //checa zero
    for(i=0;i<1500;i++){
    	if(p[i]!=0){
    		printf("%d ",p[i]);
		}
	}
	
	//atribui indice
	for(i=0;i<1500;i++){
    	p[i]=i;
    	//printf("%d ",i);
	}
	
	//10 primeiros e 10 ultimos
	for(i=0;i<1500;i++){
    	if(i<10 || i>1489){
    		printf("%d\n",p[i]);
		}
	}

    return 0;
}

