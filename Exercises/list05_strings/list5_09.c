#include <stdio.h>

int main()
{
    char string[100];
    printf("Insira um nome: ");
    gets(string);
    if(string[0]=='a' || string[0]=='A'){
    	printf("%s",string);
	}

    return 0;
}
