#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int mantI;
	int i,j,k=0,aux=0,cont=0;
    char alun[5][40],proc[40];
    
    for(i=0;i<5;i++){
		printf("Insira o nome do aluno %d (0 pra parar): ",i+1);
    	scanf("%40[^\n]%*c",alun[i]);
    	if(alun[i][0]=='0'){
    		break;
		}
	}
	
	printf("Digite um aluno que deseja procurar: ");
	scanf("%40[^\n]%*c",proc);
	int t2p = strlen(proc);
	
	for(i=0;i<5;i++){
		for(j=0,k=0;alun[i][k]!='\0';k++){
			if(proc[j]==alun[i][k]){
				j++;
				cont++;
			}
			else{
				j=0;
				cont=0;
			}
			if(cont==t2p){
				break;
			}
		}
		if(cont==t2p){
			printf("\nAluno: %s\n indice do vetor(matriz): %d",alun[i],i);
			cont=0;
		}
	}
	

    return 0;
}

