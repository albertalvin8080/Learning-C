#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = (int*) calloc(5,sizeof(int));
    
    if(p==NULL){
    	printf("\nFalha ao alocar.");
    	return 0;
	}
    
    for(int i=0;i<5;i++){
    	printf("Insira o valor de *p%d: ",i);
    	scanf("%d",&*(p+i));
	}
	
	for(int i=0;i<5;i++){
		printf("%d ",p[i]);
	}
	
	free(p);

    return 0;
}

