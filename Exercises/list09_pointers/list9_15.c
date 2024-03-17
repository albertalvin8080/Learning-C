#include <stdio.h>
#define tam 5
void imprime(int *vp);

int main()
{
    int i,v[tam],*vptr=&v[0];
    for(i=0;i<tam;i++){
    	*vptr=24;
    	vptr++;
	}
	imprime(&v[0]);
	
    return 0;
}
void imprime(int *vp){
	int j;
	for(j=0;j<tam;j++){
		printf("%d\n",*vp);
		vp++;
	}
}
