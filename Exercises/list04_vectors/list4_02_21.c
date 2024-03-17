#include <stdio.h>
#include <stdlib.h>
#define l 2
#define c 2

int main()
{
    int i,j,caso;
    float m1[l][c],m2[l][c],ms[l][c],constante;
	
	for(i=0;i<l;++i){
		for(j=0;j<c;++j){
			m1[i][j]=rand()%100;
		}
	}
	for(i=0;i<l;++i){
		for(j=0;j<c;++j){
			m2[i][j]=rand()%100;
		}
	}
	printf("Escolha uma opcao:\n\tSomar as martizes(1)\n\tSubtrair a primeira da segunda(2)\n\tAdicionar uma constante as duas matrizes(3)\n\tImprimir as matrizes(4)\n\t");
    scanf("%d",&caso);
	switch(caso){
		case 1:
			for(i=0;i<l;++i){
				for(j=0;j<c;++j){
					ms[i][j]=m1[i][j]+m2[i][j];
				}
			}
			for(i=0;i<l;i++){
				for(j=0;j<c;++j){
					printf("%.f ",m1[i][j]);
				}
				printf("\n");
			}
			printf("\n");
			for(i=0;i<l;i++){
				for(j=0;j<c;++j){
					printf("%.f ",m2[i][j]);
				}
				printf("\n");
			}
			printf("\n");
			for(i=0;i<l;i++){
				for(j=0;j<c;++j){
					printf("%.f ",ms[i][j]);
				}
				printf("\n");
			}
			break;
		case 2:
			for(i=0;i<l;++i){
				for(j=0;j<c;++j){
					ms[i][j]=m2[i][j]-m1[i][j];
				}
			}
			for(i=0;i<l;i++){
				for(j=0;j<c;++j){
					printf("%.f ",m1[i][j]);
				}
				printf("\n");
			}
			printf("\n");
			for(i=0;i<l;i++){
				for(j=0;j<c;++j){
					printf("%.f ",m2[i][j]);
				}
				printf("\n");
			}
			printf("\n");
			for(i=0;i<l;i++){
				for(j=0;j<c;++j){
					printf("%.f ",ms[i][j]);
				}
				printf("\n");
			}
			break;
		case 3:
			printf("Digite o valor de uma constante: ");
			scanf("%f",&constante);
			for(i=0;i<l;++i){
				for(j=0;j<c;++j){
					m1[i][j]+=constante;
				}
			}
			for(i=0;i<l;++i){
				for(j=0;j<c;++j){
					m2[i][j]+=constante;
				}
			}
			for(i=0;i<l;i++){
				for(j=0;j<c;++j){
					printf("%.f ",m1[i][j]);
				}
				printf("\n");
			}
			printf("\n");
			for(i=0;i<l;i++){
				for(j=0;j<c;++j){
					printf("%.f ",m2[i][j]);
				}
				printf("\n");
			}
			break;
		case 4:
			for(i=0;i<l;i++){
				for(j=0;j<c;++j){
					printf("%.f ",m1[i][j]);
				}
				printf("\n");
			}
			printf("\n");
			for(i=0;i<l;i++){
				for(j=0;j<c;++j){
					printf("%.f ",m2[i][j]);
				}
				printf("\n");
			}
			break;
	}
	
	return 0;
}

