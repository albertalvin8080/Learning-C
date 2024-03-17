#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f;
    f=fopen("arq.txt","w");
    
    char c;
    while(1){
    	printf("Insira um UNICO caracter: ");
    	c=fgetc(stdin);
    	if(c=='0') break;
    	scanf("%*c"); //nao pode ficar junto do fgetc()
    	fputc(c,f);
	}
	fclose(f);
	
	f=fopen("arq.txt","r");
	
	printf("Conteudo: ");
	while((c=fgetc(f))!=EOF){
		printf("%c",c);
	}
	fclose(f);

    return 0;
}

