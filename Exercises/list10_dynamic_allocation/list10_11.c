#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int matricula;
	int anoNascimento;
	char sobrenome[40];
} Alunos;

void lerAlunos(Alunos info[],int t);

int main()
{
	int t;
    printf("Informe quantos alunos serao armazenados: ");
    scanf("%d",&t);
    
    Alunos *info;
    info = (Alunos*) calloc(t,sizeof(Alunos));
    
    lerAlunos(info,t);
    
    free(info);

    return 0;
}
void lerAlunos(Alunos info[],int t){
	for(int i=0;i<t;i++){
		printf("Insira a matricula do aluno %d: ",i+1);
			scanf("%d",&info[i].matricula);
		printf("Agora, o ano de nascimento: ");
			scanf("%d",&(i+info)->anoNascimento);
		printf("Por ultimo, o sobrenome: ");
			scanf("%40s",info[i].sobrenome);
		printf("\n");
	}
	
	for(int i=0;i<t;i++){
		printf("---Aluno %d---\n",i+1);
		printf("Matricula: %d\n",info[i].matricula);
		printf("Sobrenome: %s\n",info[i].sobrenome);
		printf("Ano de nascimento: %d\n\n",info[i].anoNascimento);
	}
}
