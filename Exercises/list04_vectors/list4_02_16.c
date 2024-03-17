#include <stdio.h>
#include <stdlib.h>
#define l 3
#define c 10

int main()
{
    int i,j,resul=0,media=7,matricula[3];
    char m[l][c],v[10];
	
	printf("Insira o gabarito das questoes: ");
	for(i=0;i<10;++i){
		scanf("%c%*c",&v[i]);
	}
	
	for(i=0;i<l;i++){
		printf("Insira a matricula do aluno %d: ",i+1);
		scanf("%d",&matricula[i]);
		printf("Digite a resposta do aluno %d: ",i+1);
		for(j=0;j<c;++j){
			scanf("%c%*c",&m[i][j]);
			//m[i][j]='a';
		}
	}
	for(i=0;i<l;++i){
		for(j=0;j<c;++j){
			if(v[j]==m[i][j]){
				resul++;
			}
		}
		printf("\nMatricula do aluno %d: %d\n",i+1,matricula[i]);
		printf("Pontuacao do aluno %d = %d\n",i+1,resul);
		if(resul>=media){
			printf("O aluno passou\n");
		}
		else{
			printf("O aluno se ferrou\n");
		}
		resul=0;
	}
	
	
    return 0;
}
