#include <stdio.h>

int main()
{
    char nome[20];
    
    printf("Digite um nome: ");
    gets(nome);
    
    int contagem(char str[]);
    int num = contagem(nome);
    printf("A string '%s' tem %d letras.",nome,num);
    

    return 0;
}
int contagem(char str[]){
	int i,cont=0;
	for(i=0;str[i]!='\0';++i){
		cont++;
	}
	return cont;
}
