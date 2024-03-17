#include <stdio.h>
#include <string.h>

struct aluno{
	int matricula;
	float n1,n2,n3;
	char nome[30];
};

int main()
{
	int i,manterMatriculaN1,manterMatriculaMaior,manterMatriculaMenor;
	float maiorn1=-1,maiorMedia=-1,menorMedia=99,mediatemp;
	char manterNomeN1[30],manterNomeMaior[30],manterNomeMenor[30];
	struct aluno info[5];
    
    for(i=0;i<5;i++){
    	printf("Insira o nome, matricula e notas 1, 2 e 3 do aluno %d: ",i+1);
    	scanf("%30[^\n]%*c%d%f%f%f%*c",info[i].nome,&info[i].matricula,&info[i].n1,&info[i].n2,&info[i].n3);
		
		if(info[i].n1>maiorn1){
			maiorn1=info[i].n1;
			strcpy(manterNomeN1,info[i].nome);
			manterMatriculaN1=info[i].matricula;	
		}
		mediatemp=(info[i].n1+info[i].n2+info[i].n3)/3.0;
		if(mediatemp>maiorMedia){
			maiorMedia=mediatemp;
			strcpy(manterNomeMaior,info[i].nome);
			manterMatriculaMaior=info[i].matricula;	
		}
		if(mediatemp<menorMedia){
			menorMedia=mediatemp;
			strcpy(manterNomeMenor,info[i].nome);
			manterMatriculaMenor=info[i].matricula;
		}
	}
	
	for(i=0;i<5;i++){
		mediatemp=(info[i].n1+info[i].n2+info[i].n3)/3.0;
		if(mediatemp<6){
			printf("\nAluno: %s\nMedia = %.1f\nResultado: REPROVADO\n",info[i].nome,mediatemp);
		}
		else{
			printf("\nAluno: %s\nMedia = %.1f\nResultado: Aprovado\n",info[i].nome,mediatemp);
		}
	}
	
	printf("\nMAIOR PRIMEIRA NOTA\n- Aluno: %s\n- Matricula: %d\n- Primeira nota = %.1f\n",manterNomeN1,manterMatriculaN1,
	maiorn1);
	printf("\nMAIOR MEDIA GERAL\n- Aluno: %s\n- Matricula: %d\n- Media = %.1f\n",manterNomeMaior,manterMatriculaMaior,
	maiorMedia);
	printf("\nMENOR MEDIA GERAL\n- Aluno: %s\n- Matricula: %d\n- Media = %.1f\n",manterNomeMenor,manterMatriculaMenor,
	menorMedia);
	

    return 0;
}

