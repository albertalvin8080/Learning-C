#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int telefone;
	char nome[50];
} agenda;

void escrever(agenda info[]);

int main()
{
	agenda info[100];
    escrever(info);

    return 0;
}
void escrever(agenda info[]){ 
	FILE *f;
	f=fopen("agenda.txt","w");
	
	int i=0;
	while(1){
		printf("Insira nome n%d: ",i+1);
		fgets(info[i].nome,50,stdin);
		fputs(info[i].nome,f);
		
		printf("Agora telefone ('0' termina): ");
		scanf("%d%*c",&info[i].telefone);
		if(info[i].telefone==0) break;
		
		fprintf(f,"%d\n",info[i].telefone);
		
		i++;
	}
	
	fclose(f);
}
