#include <stdio.h>
#include <stdlib.h>
#define l 5
#define c 10

int main()
{
    int i,j,resul=0;
    char m[l][c],v[10];
	
	printf("Insira o gabarito das questoes: ");
	for(i=0;i<10;++i){
		scanf("%c%*c",&v[i]);
	}
	
	for(i=0;i<l;i++){
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
		printf("Pontuacao do aluno %d = %d\n",i+1,resul);
		resul=0;
	}
	
	
    return 0;
}
