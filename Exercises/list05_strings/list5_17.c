#include <stdio.h>

int main()
{
    int i;
    char str[100],str2[100];
    
    printf("Insira uma frase: ");
    gets(str);
	
	for(i=0;str[i]!='\0';++i){
		if(str[i]!=' '){
			printf("%c",str[i]);
		}
	}
	
    return 0;
}
