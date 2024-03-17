#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct livros{
	char titulo[30],autor[15];
	int ano;
} info[5];

int main()
{
    int i;
    char procura[30];
    
    for(i=0;i<5;i++){
    	printf("Insira o titulo do livro n%d: ",1+i);
    	scanf("%30[^\n]%*c",info[i].titulo);
    	printf("Agora o autor: ");
    	scanf("%15[^\n]%*c",info[i].autor);
    	printf("Por ultimo, o ano: ");
    	scanf("%d%*c",&info[i].ano);
	}
	printf("Digite o titulo de um livro que deseja procurar: ");
	scanf("%30[^\n]%*c",procura);
	
	for(i=0;i<5;i++){
		if(strstr(info[i].titulo,procura)!=NULL){
			printf("\nTitulo: %s\n",info[i].titulo);
			printf(" - Autor: %s\n",info[i].autor);
			printf(" - Ano: %d\n",info[i].ano);
		}
	}
	
    return 0;
}

