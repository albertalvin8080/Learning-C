#include <stdio.h>
#include <string.h>

struct alunos{
	char nome[20],matricula[30];
	float mediaF;
}info[10],apr[10],rep[10];

int main()
{
    int i,aux1=0,aux2=0,contR=0,contA=0;
    for(i=0;i<10;i++){
    	
    	printf("Insira o nome, a matricula e a media final do alno n%d: ",i+1);
    	scanf("%20[^\n]%*c%30[^\n]%*c%f%*c",info[i].nome,info[i].matricula,
			&info[i].mediaF);
			
		if(info[i].mediaF<5){
			strcpy(rep[contR].nome,info[i].nome);
			strcpy(rep[contR].matricula,info[i].matricula);
			rep[contR].mediaF = info[i].mediaF;
			aux2++;
			contR++;
		}
		else{
			strcpy(apr[contA].nome,info[i].nome);
			strcpy(apr[contA].matricula,info[i].matricula);
			apr[contA].mediaF = info[i].mediaF;
			aux1++;
			contA++;
		}
	}
	
	if(aux1>0){
		printf("\n*APROVADOS*");
		for(i=0;i<aux1;i++){
			printf("\nAluno: %s\n - Matricula: %s\n - Media Final = %.1f\n",
				apr[i].nome,apr[i].matricula,apr[i].mediaF);
		}
	}
	
	if(aux2>0){
		printf("\n*REPROVADOS*");
		for(i=0;i<aux2;i++){
			printf("\nAluno: %s\n - Matricula: %s\n - Media Final = %.1f\n",
				rep[i].nome,rep[i].matricula,rep[i].mediaF);
		}
	}
	
	
    return 0;
}
