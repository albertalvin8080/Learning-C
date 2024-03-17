#include <stdio.h>
struct alunos{
	char nome[40],curso[40];
	int matricula;
};
void scanfAluno(struct alunos info[5]);
void printfAluno(struct alunos info[5]);

int main()
{
    struct alunos informacoes[5];
    scanfAluno(informacoes);
    printfAluno(informacoes);

    return 0;
}
void scanfAluno(struct alunos info[5]){
	int i;
	for(i=0;i<5;i++){
		printf("Insira nome, matricula e curso do aluno %d: ",i+1);
		scanf("%40[^\n]%*c%d%*c%40[^\n]%*c",info[i].nome,&info[i].matricula,info[i].curso);
	}
}
void printfAluno(struct alunos info[5]){
	int i;
	for(i=0;i<5;i++){
		printf("\nAluno %d\nNome: %s\nMatricula: %d\nCurso: %s\n",i+1,info[i].nome,info[i].matricula,info[i].curso);
	}
}
