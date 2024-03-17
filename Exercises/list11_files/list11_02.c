#include <stdio.h>

int main()
{
    FILE *f;
    int linhas=0;
    f=fopen("arq.txt","w");
    
	if(f==NULL){
		printf("Erro ao abrir arquivo.");
		return 0;
	}
    
    char str[100]={0};
    while(fgets(str,100,stdin)){
    	if(str[0]=='0') break;
    	fputs(str,f);
    	linhas++;
	}
	fclose(f);
	
	printf("O arquivo possui %d linha(s).",linhas);
	
    return 0;
}

