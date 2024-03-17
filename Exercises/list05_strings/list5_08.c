#include <stdio.h>

int main()
{
    char string[100];
	printf("Insira 0s e 1s: ");
	gets(string);
	
	void contagem(char str[]);
	contagem(string);
	
	printf("%s",string);
	
    return 0;
}
void contagem(char str[]){
	int i,cont=0;
	for(i=0;str[i]!='\0';++i){
		if(str[i]=='0'){
			str[i]='1';
		}
	}
	//printf("%s",str);
}
