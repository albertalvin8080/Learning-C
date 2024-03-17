#include <stdio.h>

char MinusculaParaMaiuscula(char letra);

int main()
{
	char c,*p=&c;
    printf("Insira uma letra MINUSCULA: ");
    scanf("%c",&*p);
    
    *p = MinusculaParaMaiuscula(*p);
    printf("Maiscula da letra: %c",*p);

    return 0;
}

char MinusculaParaMaiuscula(char letra){
	// a operacao deve ser de (- 32) para mudar o case das letras
	return letra - 32;
}
