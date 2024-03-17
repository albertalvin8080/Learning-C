#include <stdio.h>

int main()
{
    char string[100],cara;
    int i;
    printf("Insira uma string: ");
    for(i=0;cara!='\n';i++){
    	cara = getchar();
    	string[i] = cara;
	}
	string[i-1]='\0';
	
	int contarCara(char palavra[]);
	int num = contarCara(string);
	printf("A string '%s' possui %d caracteres.",string,num);
	
    return 0;
}
int contarCara(char palavra[]){
	int i,cont=0;
	
	for(i=0;palavra[i]!='\0';i++){
		cont++;
	}
	return ++cont; //++ pelo '\0'
}
