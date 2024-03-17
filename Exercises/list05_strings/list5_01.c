#include <stdio.h>

int main()
{
    char string[100],cara;
    int i;
    
    printf("Digite uma string: ");
    for(i=0;cara!='\n';i++){
    	cara = getchar();
    	string[i] = cara;
	}
    string[i-1]='\0';
    
    printf("A string eh: %s",string);

    return 0;
}

