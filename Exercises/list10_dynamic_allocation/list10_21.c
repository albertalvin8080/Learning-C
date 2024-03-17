#include <time.h>
#include <stdio.h>
#include <stdlib.h>

void imprimeMatriz(int **m,int l,int co);
void preencheMatriz(int **m,int l,int co);
void multiplica(int **m1,int **m2,int **m3,int a,int b);

int main()
{
	int a,b,c,d;
    printf("Insira A e B: ");
    scanf("%d%d",&a,&b);
    printf("Insira C e D: ");
    scanf("%d%d",&c,&d);
    
    if(a!=c || b!=d){
    	printf("A multiplicacao serah comprometida.\n");
	}
    
    srand(time(NULL));
    
    int **m1 = (int**) calloc(a,sizeof(int*));
    for(int i=0;i<a;i++){
    	m1[i] = (int*) calloc(b,sizeof(int));
	}
	preencheMatriz(m1,a,b);
	
	int **m2 = (int**) calloc(c,sizeof(int*));
    for(int i=0;i<c;i++){
    	m2[i] = (int*) calloc(d,sizeof(int));
	}
	preencheMatriz(m2,c,d);
	
	printf("\nMatriz 1:\n");
	imprimeMatriz(m1,a,b);
	
	printf("\nMatriz 2:\n");
	imprimeMatriz(m2,c,d);
	
	int **m3 = (int**) calloc(a,sizeof(int*));
	for(int i=0;i<a;i++){
		m3[i] = (int*) calloc(b,sizeof(int));
	}
	
	multiplica(m1,m2,m3,a,b);
	
	printf("\nMatriz Multiplicacao:\n");
	imprimeMatriz(m3,a,b);

    return 0;
}
void multiplica(int **m1,int **m2,int **m3,int a,int b){
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			m3[i][j] = m1[i][j] * m2[i][j];
		}
	}
}
void imprimeMatriz(int **m,int l,int co){
	for(int i=0;i<l;i++){
		for(int j=0;j<co;j++){
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}
}
void preencheMatriz(int **m,int l,int co){
	for(int i=0;i<l;i++){
		for(int j=0;j<co;j++){
			m[i][j] = rand()%100;
		}
	}
}

