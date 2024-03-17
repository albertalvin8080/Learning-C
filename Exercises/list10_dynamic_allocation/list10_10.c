#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	double t;
	do{
		printf("Tamanho do array: ");
    	scanf("%lf",&t);
    	
    	if(t<10){
    		printf("Precisa ser > 9. ");
		}
		
	}while(t<10);

	double *p = (double*)malloc(t*sizeof(double));
	
	srand(time(NULL));
	for(int i=0;i<t;i++){
		p[i]=rand()%101;
	}
	
	printf("\nDez primeiros numeros:\n");
	for(int i=0;i<10;i++){
		printf("%.lf ",p[i]);
	}
	
    return 0;
}

