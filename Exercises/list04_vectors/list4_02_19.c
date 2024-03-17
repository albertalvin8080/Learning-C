#include <stdio.h>
#include <stdlib.h>
#define l 5
#define c 4

int main()
{  //questao adaptada de int pra float pra fazer mais sentido
    float m[l][c],matricula,maior=-1,media=0;
    int i,j,aux=0;
    
    for(i=0;i<l;i++){
    		printf("Insira a matricula, mediaP e mediaT do aluno %d: ",i+1);
    	for(j=0;j<3;j++){
    		scanf("%f",&m[i][j]);
		}
	}
	for(i=0;i<l;i++){
		j=3;
		m[i][j]=m[i][j-1]+m[i][j-2];
		if(m[i][j]>maior){
			maior=m[i][j];
			matricula=m[i][0];
		}
	}
	printf("Maior nota = %.1f\nMatricula do Aluno = %.f\n",maior,matricula);
	for(i=0;i<l;i++){
		j=3;
		media+=m[i][j];
	}
	media = (float) media / i;
	printf("Media das notas finais = %.1f",media);
	
    return 0;
}

