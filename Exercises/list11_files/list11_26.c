#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int matricula;
	int anoNascimento;
	char sobrenome[20];
}Alunos;

void lerArquivo(int N);
void limparBuffer(void);
int carregarInfo(Alunos *infm);
void lerInfo(Alunos *info,int N);
void mostarDados(Alunos *info,int N);
void armazenarInfo(Alunos *info,int N);

int main()
{
	char op;
	printf("Quer carregar os registros da memoria?\n");
	printf("(S/N): ");
		scanf("%c",&op);
		limparBuffer();
	
	int indice=0;
	Alunos *info = (Alunos*) calloc(100,sizeof(Alunos));
	
	switch(op){
		case 's':
			indice = carregarInfo(info);
			break;
		case 'S':
			indice = carregarInfo(info);
			break;
	}
	
	int N;
	do{
    	printf("Quantos alunos quer armazenar?: ");
    		scanf("%d",&N);
		
		if(N<0){
			printf("*Quantidade invalida. ");
		}
	}while(N<0);
	
	
	lerInfo(info,N);
	armazenarInfo(info,N);
	
	mostarDados(info,N+indice);
	//lerArquivo(N+indice);
	
	free(info);
	
    return 0;
}
void mostarDados(Alunos *info,int N){
	
	if(N!=0){
		printf("\n==========ALUNOS==========");
	}
		
	
	for(int i=0;i<N;i++){
		printf("\n-Sobrenome: %s\n",info[i].sobrenome);
		printf("-Matricula: %d\n",info[i].matricula);
		printf("-Ano de nascimento: %d\n",info[i].anoNascimento);
	}
}
int carregarInfo(Alunos *infm){
	FILE *f;
	f = fopen("alunos.txt","r");
	
	if(f==NULL){
		printf("\nFalha ao carregar informacoes.");
		exit(1);
	}
	
	int i=0;
	while( fscanf(f,"%d %s %d",&infm[i].matricula,infm[i].sobrenome,&infm[i].anoNascimento) != EOF){
		i++;
	}
	
	fclose(f);
	
	return i;
}
/*void lerArquivo(int N){
	FILE *f;
	f = fopen("alunos.txt","r");
	
	if(f==NULL){
		printf("\nFalha ao criar arquivo.");
		exit(1);
	}
	
	printf("\n===ALUNOS===");
	Alunos inf2;
	for(int i=0;i<N;i++){
		fscanf(f,"%d %s %d",&inf2.matricula,inf2.sobrenome,
		&inf2.anoNascimento);
		
		printf("\n-Sobrenome: %s\n",inf2.sobrenome);
		printf("-Matricula: %d\n",inf2.matricula);
		printf("-Ano de nascimento: %d\n",inf2.anoNascimento);
	}
	
	fclose(f);
}*/
void armazenarInfo(Alunos *info,int N){
	FILE *f;
	f = fopen("alunos.txt","a");
	
	if(f==NULL){
		printf("\nFalha ao criar arquivo.");
		exit(1);
	}
	
	for(int i=0;i<N;i++){
		fprintf(f,"%d %s %d\n",info[i].matricula,info[i].sobrenome,
		info[i].anoNascimento);
	}
	
	fclose(f);
}
void lerInfo(Alunos *info,int N){
	
	int i;
	for(i=0;i<N;i++){
		printf("\n-Aluno %d-\n",i+1);
		printf("Matricula: ");
			scanf("%d",&info[i].matricula);
			limparBuffer();
		printf("Sobrenome: ");
			scanf("%20[^\n]",info[i].sobrenome);
			limparBuffer();
		printf("Ano de nascimento: ");
			scanf("%d",&info[i].anoNascimento);
			limparBuffer();
	}
}
void limparBuffer(void){
	char c;
	while( (c=getchar()) != '\n' && c != EOF );
}
