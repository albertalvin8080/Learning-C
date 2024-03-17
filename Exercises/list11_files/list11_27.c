#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Indice Global
int gI=0;

typedef struct{
	char nome[40];
	float n1,n2,n3;
}Alunos;

void limparBuffer(void);
void testarAbertura(FILE *f);
void definirInfo(Alunos *info);
void exibirMedias(Alunos *info);
void salvarEmDisco(Alunos *info);
void exibirAprovados(Alunos *info);
void exibirReprovados(Alunos *info);
void inserirAlunoNotas(Alunos *info);

int main()
{
	Alunos *info = (Alunos*) calloc(100,sizeof(Alunos));
    
    char op;
    do{
    	printf("===============MENU===============\n");
    	printf("(a) Definir informacoes da turma;\n"
			    "(b) Inserir aluno e notas;\n"
				"(c) Exibir alunos e medias;\n"
				"(d) Exibir alunos aprovados;\n"
				"(e) Exibir alunos reprovados;\n"
				"(f) Salvar dados em Disco;\n"
				"(g) Sair do programa (fim).\n?");
    	scanf("%c",&op);
    	limparBuffer();
    	
    	switch(op){
    		case 'a':
    			definirInfo(info);
    			break;
    		case 'b':
    			inserirAlunoNotas(info);
    			break;
    		case 'c':
    			exibirMedias(info);
    			break;
    		case 'd':
    			exibirAprovados(info);
    			break;
    		case 'e':
    			exibirReprovados(info);
    			break;
    		case 'f':
    			salvarEmDisco(info);
    			break;
    		case 'g':
    			printf("========PROGRAMA ENCERRADO========");
    			break;
    			
    		default:
    			printf("\nOpcao invalida.\n");
		}
		printf("\n");
    	
	}while(op != 'g');

    return 0;
}
void salvarEmDisco(Alunos *info){
	FILE *f;
	f = fopen("alunos27.txt","a");
	testarAbertura(f);
	
	for(int i=0;i<gI;i++){
		fprintf(f,"%s/ %.1f %.1f %.1f\n",info[i].nome,info[i].n1,info[i].n2,info[i].n3);
	}
	
	printf("\nDados salvos com sucesso.\n");
	
	fclose(f);
}
void exibirAprovados(Alunos *info){
	
	int flag=0;
	float media;
	printf("\n---Aprovados---\n");
	for(int i=0;i<gI;i++){
		media = (info[i].n1 + info[i].n2 + info[i].n3) / 3.0;
		if(media >= 7.00){
			printf("\nNome: %s\n",info[i].nome);
			printf("Media Final: %.1f\n",media);
			flag++;
		}
	}
	
	if(flag==0){
		printf("Nenhum aluno foi aprovado.\n");
	}
	
}
void exibirReprovados(Alunos *info){
	
	int flag=0;
	float media;
	printf("\n---Reprovados---\n");
	for(int i=0;i<gI;i++){
		media = (info[i].n1 + info[i].n2 + info[i].n3) / 3.0;
		if(media < 7.00){
			printf("\nNome: %s\n",info[i].nome);
			printf("Media Final: %.1f\n",media);
			flag++;
		}
	}
	
	if(flag==0){
		printf("Nenhum aluno foi reprovado.\n");
	}
	
}
void exibirMedias(Alunos *info){
	
	int i=1;
	float media;
	for(int i=0;i<gI;i++){
		printf("\n---Aluno %d---\n",i+1);
		printf("Nome: %s\n",info->nome);
		
		media = (info[i].n1 + info[i].n2 + info[i].n3) / 3.0;
		printf("Media Final: %.1f\n",media);
	}
	
}
void inserirAlunoNotas(Alunos *info){
	
	printf("\nInsira o nome do aluno: ");
		scanf("%40[^\n]",info[gI].nome);
		limparBuffer();
	printf("Notas 1, 2 e 3: ");
		scanf("%f%f%f",&info[gI].n1,&info[gI].n2,&info[gI].n3);
		limparBuffer();
		
	gI++;
	
}
void testarAbertura(FILE *f){
	if(f == NULL){
		printf("\nFalha ao abrir arquivo.");
		exit(1);
	}
}
void definirInfo(Alunos *info){
	printf("\nAs informacoes sao salvas seguindo o seguinte modelo:\n");
	printf("%%Nome/ %%Nota1 %%Nota2 %%Nota3\n");
}
void limparBuffer(void){
	char c;
	while( (c=getchar()) != '\n' && c != EOF );
}

