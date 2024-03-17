#include <stdio.h>

int main()
{
    FILE *f;
    f=fopen("arq.txt","w");
    
    char str[100];
    while(1){
    	printf("Insira uma frase: ");
    	fgets(str,100,stdin);
    	if(str[0]=='0') break;
    	fputs(str,f);
	}
	fclose(f);
	
	f=fopen("arq.txt","r");
	
	char c;
	int vogal=0;
	while( (c=fgetc(f)) != EOF ){
		if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
			vogal++;
		}
	}
	fclose(f);
	printf("O arquivo possui %d vogais.",vogal);
	
    return 0;
}
