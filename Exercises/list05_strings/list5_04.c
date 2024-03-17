#include <stdio.h>

int main()
{
	int i,cont=0;
	char string[20];
    printf("Digite um nome: ");
    fgets(string,20,stdin);
    
    for(i=0;i<4;++i){
    	printf("%c ",string[i]);
	}

    return 0;
}

