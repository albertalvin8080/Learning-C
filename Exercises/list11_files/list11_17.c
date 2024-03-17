//ESSA QUESTAO PRECISA DE UM ARQUIVO FORMATADO PREVIAMENTE E DE ACORDO COM O TEXTO
#include <stdio.h>
#include <stdlib.h>

struct dimensoesMatriz{
	int l,c;
	int anular;
}info;

struct PosicoesAnuladas{
	int Lanu,Canu;
}anu[100];

void escreverMatriz(void);
void lerMatriz(char arq[]);
void lerMatriz(char arq[]);
int checarAnulacao(int i,int j);

int main()
{
	char arq[40];
    printf("Insira o nome do ARQ de entrada: ");
    scanf("%40[^\n]%*c",arq);
    
    lerMatriz(arq);

    return 0;
}
void lerMatriz(char arq[]){
	FILE *f1;
	f1=fopen(arq,"r");
	
	if(f1==NULL){
		printf("\nFalha ao abrir arquivo.");
		exit(1);
	}
	
	//dimensoes da Matriz
	fscanf(f1,"%d %d",&info.l,&info.c);
	
	//quantidade de posicoes a serem anuladas
	fscanf(f1,"%d",&info.anular);
	
	//posicoes anuladas
	int i=0;
	while( fscanf(f1,"%d %d",&anu[i].Lanu,&anu[i].Canu) != EOF ){
		i++;
	}
	
	escreverMatriz();
	
	fclose(f1);
}
void escreverMatriz(void){
	FILE *f2;
	f2=fopen("matriz_saida.txt","w");
	
	if(f2==NULL){
		printf("\nFalha ao ESCREVER matriz.");
		exit(1);
	}
	
	int cont;
	
	for(int i=0;i<info.l;i++){
		for(int j=0;j<info.c;j++){
			int cont=checarAnulacao(i,j);
			if(cont==0){
				fprintf(f2,"%d ",1);
			}else{
				fprintf(f2,"%d ",0);
			}
		}
		fprintf(f2,"\n");
	}
	
	fclose(f2);
}
int checarAnulacao(int i,int j){
	for(int k=0;k<info.anular;k++){
		if(i==anu[k].Lanu && j==anu[k].Canu){
			return 1;
		}
	}
	
	return 0;
}
