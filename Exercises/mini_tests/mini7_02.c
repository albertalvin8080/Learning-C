#include <stdio.h>

int palavras(char str[]);

int main()
{
	char str[50]={0};
	
    printf("Insira uma string: ");
    scanf("%50[^\n]",str);
    
	int quant = palavras(str);
	
	printf("\nQuant. de palavras = %d",quant);
	
    return 0;
}
int palavras(char str[]){
	int i,cont=1;
	
	if(str[0]=='\0'){
			return 0;
	}else if(str[0]==' '){
		cont--;
	}for(i=0;str[i]!='\0';i++){
		if(str[i]==' ' && str[i+1]!='\0' && str[i+1]!=' '){
			cont++;	
		}
	}
	
	return cont;
}
