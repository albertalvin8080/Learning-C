#include <stdio.h>
void tamanho(char *str, int *strsize);

int main()
{
	char s1[40];
	int strsize;
    printf("Insira uma string: ");
    scanf("%40[^\n]%*c",s1);
    
    tamanho(s1,&strsize);
    printf("Tamanho da string = %d",strsize);

    return 0;
}

void tamanho(char *str, int *strsize){
	int i;
	for( ;*str!='\0'; ){
		*strsize+=1;
		str++;
	}
}
