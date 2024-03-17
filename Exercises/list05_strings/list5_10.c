#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char str[20];
    printf("Digite uma string: ");
    gets(str);
    
    int t = strlen(str);
    
    for(i=t-1;i>=0;--i){
    	printf("%c",str[i]);
	}

    return 0;
}

