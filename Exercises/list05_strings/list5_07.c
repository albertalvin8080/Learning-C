#include <stdio.h>

int main()
{
    char string[100];
	printf("Insira 0s e 1s: ");
	gets(string);
	
	int contagem(char str[]);
	int num = contagem(string);
	
	printf("Quantidade de 1s: %d",num);
	
    return 0;
}
int contagem(char str[]){
	int i,cont=0;
	for(i=0;str[i]!='\0';++i){
		if(str[i]=='1'){
			++cont;
		}
	}
	
	return cont;
}
