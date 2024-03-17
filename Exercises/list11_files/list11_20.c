#include <stdio.h>
#include <stdlib.h>

/*typedef struct{
	char nome[40];
	int notaF;
}Disciplina;*/

void limparBuffer(void);
void limparArquivoDestino(void);
void criarArquivo(char *nome,float nota);
void lerAlunos(char **nome,float *notas,int N);

int main()
{
	int N;
    printf("Insira a quantidade de alunos: ");
    scanf("%d%*c",&N);
    
    char **nome = (char**) calloc(N,sizeof(char*));
    for(int i=0;i<N;i++){
    	nome[i] = (char*) calloc(40,sizeof(char));
	}
    
    float *notas = (float*) calloc(N,sizeof(float));
    
    lerAlunos(nome,notas,N);

    return 0;
}
void lerAlunos(char **nome,float *notas,int N){
	
	limparArquivoDestino();
	
	for(int i=0;i<N;i++){
		printf("\n-Aluno %d-\n",i+1);
		printf("Insira nome: ");
			scanf("%40[^\n]",nome[i]);
			limparBuffer();
		printf("Insira nota Final: ");
			scanf("%f%*c",&notas[i]);
		
		criarArquivo(nome[i],notas[i]);
		
	}
}
void limparBuffer(void){
	char c;
	while( (c=getchar()) != '\n' && c != EOF );
}
void criarArquivo(char *nome,float nota){
	FILE *f;
	f=fopen("notas_finais.txt","a");
	
	for(int j=0;j<40;j++){
		if(nome[j]!='\0'){
			fputc(nome[j],f);
		}else{
			fputc(' ',f);
		}
	}
	
	fprintf(f,"/ %.2f\n",nota);
	
	fclose(f);
	
}
void limparArquivoDestino(void){
	FILE *f;
	f=fopen("notas_finais.txt","w");
	
	fclose(f);
}

