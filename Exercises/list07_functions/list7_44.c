#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 30
void preenche(int x[],int a[],int b[]);

int main()
{
    int i,j,v[tam],a[tam]={0},b[tam]={0};
	srand(time(NULL));
	for(i=0;i<tam;i++){
    	v[i]=(rand()%100)+1;
	}
	preenche(v,a,b);
	
	printf("A = ");
	for(i=0;a[i]!=0;i++){
    	printf("%d ",a[i]);
	}
	printf("\nB = ");
	for(i=0;b[i]!=0;i++){
    	printf("%d ",b[i]);
	}

    return 0;
}
void preenche(int x[],int a[],int b[]){
	int i,aux=0;
	
	for(i=0;i<tam;i++){
		if(x[i]%2==0){
			a[aux]=x[i];
			aux++;
		}
	}aux=0;
	
	for(i=0;i<tam;i++){
		if(x[i]%2!=0){
			b[aux]=x[i];
			aux++;
		}
	}
}
