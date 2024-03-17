#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	char nome[40];
	float notaF;
}Disciplina;

void limparBuffer(void);
void lerArquivo(int N);
void limparArquivo(void);
void lerAlunos(Disciplina *info,int N);
void preencheArquivo(Disciplina *info,int N);

int main()
{
	int N;
    printf("Insira a quantidade de alunos: ");
    scanf("%d%*c",&N);
    
    Disciplina *info = (Disciplina*) calloc(N,sizeof(Disciplina));
    
    limparArquivo();
    lerAlunos(info,N);
    preencheArquivo(info,N);
    lerArquivo(N);

    return 0;
}
void lerArquivo(int N){
	FILE *f;
	f=fopen("alunos_binario.bin","rb");
	
	if(f==NULL){
		printf("\nFalha ao ler arquivo.");
		exit(1);
	}
	
	Disciplina *inf2 = (Disciplina*) calloc(N,sizeof(Disciplina));
	fread(inf2,sizeof(Disciplina),N,f);
	
	char nome[40];
	float maiorN = -999999;
	for(int i=0;i<N;i++){
		if(inf2[i].notaF>maiorN){
			maiorN = inf2[i].notaF;
			strcpy(nome,inf2[i].nome);
		}
	}
	
	printf("\nMaior nota: %.2f\n",maiorN);
	printf("Aluno: %s\n",nome);
	
	fclose(f);
}
void preencheArquivo(Disciplina *info,int N){
	FILE *f;
	f=fopen("alunos_binario.bin","ab");
	
	if(f==NULL){
		printf("\nFalha ao escrever arquivo.");
		exit(1);
	}
	
	fwrite(info,sizeof(Disciplina),N,f);
	
	fclose(f);
}
void lerAlunos(Disciplina *info,int N){
	for(int i=0;i<N;i++){
		printf("\n-Aluno %d-\n",i+1);
		printf("Insira nome: ");
			scanf("%40[^\n]",info[i].nome);
			limparBuffer();
		printf("Insira nota final: ");
			scanf("%f",&info[i].notaF);
			limparBuffer();
	}
}
void limparArquivo(void){
	FILE *f;
	f=fopen("alunos_binario.bin","wb");
	
	if(f==NULL){
		printf("\nFalha ao limpar arquivo.");
		exit(1);
	}
	
	fclose(f);
}
void limparBuffer(void){
	char c;
	while( (c=getchar()) != '\n' && c != EOF );
}
