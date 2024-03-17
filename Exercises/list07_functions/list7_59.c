#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 10
int uniao(int a[],int b[],int c[]);

int main()
{
    int i,j,a[tam],b[tam],c[tam*2];
	srand(time(NULL));
	for(i=0;i<tam;i++){
    	a[i]=(rand()%20)+1;
		b[i]=(rand()%20)+1;	
	}
	
	int maior=uniao(a,b,c);
	printf("\nA U B = ");
	for(i=0;c[i]<=maior;i++){
		printf("%d ",c[i]);
	}
	
    return 0;
}
int uniao(int a[],int b[],int c[]){
	int i,j,maior=-999999,aux=1,temp;
	for(i=0,j=10;i<tam;i++,j++){
		c[i]=a[i];
		c[j]=b[i];
		if(a[i]>maior){
			maior=a[i];
		}if(b[i]>maior){
			maior=b[i];
		}
	}
	//elimina iguais (uma das partes)
	for(i=0;i<2*tam;i++){
		for(j=i+1;j<2*tam;j++){
			if(c[i]==c[j]){
				c[j]=maior+aux;
				aux++;
			}
		}
	}
	//organiza em ordem crescente
	for(i=0;i<2*tam;i++){
		for(j=i+1;j<2*tam;j++){
			if(c[i]>c[j]){
				temp=c[j];
				c[j]=c[i];
				c[i]=temp;
			}
		}
	}
	printf("A = ");
	for(i=0;i<tam;i++){
		printf("%d ",a[i]);
	}printf("\nB = ");
	for(i=0;i<tam;i++){
		printf("%d ",b[i]);
	}
	
	return maior;
}
