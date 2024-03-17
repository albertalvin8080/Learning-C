#include <stdio.h>

int main()
{
    int i,quant=0;
    char str[100];
    
    printf("Insira uma frase: ");
    gets(str);
    
    for(i=0;str[i]!='\0';++i){
    	if(str[i]==' '){
    		quant++;
		}
	}
	printf("Quantidade de brancos: %d",quant);
	
    return 0;
}

