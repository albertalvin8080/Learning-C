#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno{
	float nota;
	char nome[40];
}info;

void lerARQ(char arq[]);

int main()
{
	char arq[40];
    printf("Insira o nome do ARQ: ");
	scanf("%40[^\n]%*c",arq);
	
	lerARQ(arq);
	
    return 0;
}
void lerARQ(char arq[]){
	FILE *f;
	f=fopen(arq,"r");
	
	if(f==NULL){
		printf("\nFalha ao abrir arquivo.");
		exit(1);
	}
	
	char maiorS[40];
	float maior=-1;
	while( fscanf(f,"%*s %40[^/]%*c %*s %f %*c",info.nome,&info.nota) != EOF ){
		if(info.nota>maior){
			maior=info.nota;
			strcpy(maiorS,info.nome);
		}
	}
	
	printf("\nMaior nota: %.2f\nAluno: %s",maior,maiorS);
	
	fclose(f);
}
