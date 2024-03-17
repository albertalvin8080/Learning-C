#include <stdio.h>
#include <string.h>

int main()
{
    int i=0, idade[100]={0}, maior=-99999, menor=99999;
    char nome[20],nomeMaior[20],nomeMenor[20];
    
    while(idade[i]>=0){
    	printf("Digite sua idade (-1 pra parar): ");
    	scanf("%d",&idade[i]);
    	if(idade[i]<0){
    		break;
		}
    	printf("Agora digite seu primeiro nome: ");
    	scanf("%s",&nome);
    	if(idade[i]>maior){
    		maior=idade[i];
    		strcpy(nomeMaior,nome);
    		//nomeMaior=nome;
		}
		if(idade[i]<menor){
			menor=idade[i];
			strcpy(nomeMenor,nome);
			//nomeMenor=nome;
		}
    	
    	++i;
	}
	printf("\nMaior idade = %d\nNome: %s\n",maior,nomeMaior);
	printf("Menor idade = %d\nNome: %s",menor,nomeMenor);
    

    return 0;
}

