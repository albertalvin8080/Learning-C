//questao estranha

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tam=1,temp;
	
	int *q = (int*)realloc(q,sizeof(int));
    
    do{
    	printf("Insira um valor positivo (-1 pra terminar): ");
    	scanf("%d",&q[tam-1]);
    	
    	tam++;
    	q = (int*)realloc(q,tam);
    	
	}while(q[tam-2]>=0);
	
	if(q==NULL){ //nao fincionou
		printf("\nSem memoria!!!");
		exit(1);
	}
	
	for(int i=0;i<tam-2;i++){
		printf("%d ",q[i]);
	}
	
	
		
    return 0;
}

