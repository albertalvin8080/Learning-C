#include <stdio.h>

int main()
{
    int i;
    char str[100];
    
    printf("Insira uma frase: ");
    gets(str);
    
    for(i=0;str[i]!='\0';++i){
    	(int)str[i]++;
	}
	printf("%s",str);
	
    return 0;
}

