#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 2

typedef struct{
	int tempoDeServico;
	char profissao[40];
}Funcionarios;

void limparBuffer(void);
void limparArquivo(void);
void escreveArquivo(Funcionarios *info);
void lerFuncionarios(Funcionarios *info);
void escreverFuncionarios(Funcionarios *info);

int main()
{
    Funcionarios *info = (Funcionarios*) calloc(1,sizeof(Funcionarios));
    
    limparArquivo();
    escreverFuncionarios(info);
    lerFuncionarios(info);

    return 0;
}
void lerFuncionarios(Funcionarios *info){
	FILE *f;
	f = fopen("emp.txt","r");
	
	if(f==NULL){
		printf("\nFalha ao ler arquivo.");
		exit(3);
	}
	
	for(int i=0;i<N;i++){
		fscanf(f,"%40[^/]%*c%d%*c",info->profissao,&info->tempoDeServico);
		printf("\n**Funcionario %d**\n",i+1);
		printf("Profissao: %s\nAnos de servico: %d\n",info->profissao,info->tempoDeServico);
		
		memset(info->profissao,0,40);
	}
	
	fclose(f);
}
void escreverFuncionarios(Funcionarios *info){
	for(int i=0;i<N;i++){
		printf("-Funcionario %d-\n",i+1);
		printf("Insira a profissao: ");
			scanf("%40[^\n]",info->profissao);
			limparBuffer();
		printf("Insira anos de servico: ");
			scanf("%d",&info->tempoDeServico);
			limparBuffer();
		
		escreveArquivo(info);
		memset(info->profissao,0,40);
		
		printf("\n");
	}
}
void escreveArquivo(Funcionarios *info){
	FILE *f;
	f = fopen("emp.txt","a");
	
	if(f==NULL){
		printf("\nFalha ao escrever arquivo.");
		exit(1);
	}
	
	fprintf(f,"%s/ %d\n",info->profissao,info->tempoDeServico);
	
	fclose(f);
}
void limparBuffer(void){
	char c;
	while( (c=getchar()) != '\n' && c != EOF );
}
void limparArquivo(void){
	FILE *f;
	f = fopen("emp.txt","w");
	
	if(f==NULL){
		printf("\nFalha ao limpar arquivo.");
		exit(2);
	}
	
	fclose(f);
}

