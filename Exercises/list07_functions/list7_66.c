#include <stdio.h>
char mudarCase(char c);

int main()
{
	char c;
    printf("Insira um caractere minusculo: ");
    scanf("%c",&c);
    
    char Czao = mudarCase(c);
    printf("\nMaiusculo: %c",Czao);

    return 0;
}
char mudarCase(char c){
	return c-32;
}
