#include <stdio.h>

int tamanho(char str[]);

int main()
{
	char str[30];
	
    printf("Insira uma string: ");
    scanf("%30[^\n]",str);
	int tam = tamanho(str);
	
	printf("\nTamanho = %d\nTamanho com o '\\0' = %d",tam,tam+1);
	
    return 0;
}
int tamanho(char str[]){
	int i,cont=0;
	
	for(i=0;str[i]!='\0';i++){
		cont++;
	}
	
	return cont;
}
