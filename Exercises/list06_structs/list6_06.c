#include <stdio.h>
struct alunos{
	char nome[30],codDisc[30];
	int matricula;
	float n1,n2,media;
};

int main()
{
    struct alunos info[10];
    int i;

	for(i=0;i<10;i++){
		printf("Insira o nome do aluno, matricula, codigo da disciplina, notas 1 e 2: ");
		scanf("%30[^\n]%d%*c%30[^\n]%f%f%*c",info[i].nome,&info[i].matricula,&info[i].codDisc,
		&info[i].n1,&info[i].n2);
		info[i].media=(info[i].n1*1.0 + info[i].n2*2.0)/3.0;
	}
	
	for(i=0;i<10;i++){
		printf("\nAluno: %s\n- Matricula: %d\n- Codigo da Disciplina: %s\n- Media = %.1f\n",info[i].nome,info[i].matricula,info[i].codDisc,
		info[i].media);
	}
    return 0;
}

