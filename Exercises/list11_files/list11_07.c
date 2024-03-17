#include <stdio.h>
void cpyArq(FILE *f,FILE *g);

int main()
{
    FILE *f,*g;
    f=fopen("arq.txt","w");
    g=fopen("arq2.txt","w");
    
    char str[1000];
    while(1){
    	printf("Insira uma frase (ou '0'): ");
    	fgets(str,1000,stdin);
    	if(str[0]=='0') break;
    	fputs(str,f);
	}fclose(f);
	
	f=fopen("arq.txt","r");
	cpyArq(f,g);
	fclose(f); 
	fclose(g);
	
	char c;
	f=fopen("arq.txt","r");
	printf("\narq1:\n");
	while(fgets(str,1000,f)!=NULL){
		printf("%s",str);
	}
	fclose(f);
	
	g=fopen("arq2.txt","r");
	printf("\narq2:\n");
	while(fgets(str,1000,g) != NULL){
		printf("%s",str);
	}
	fclose(g);
	
    return 0;
}
void cpyArq(FILE *f,FILE *g){
	char c,linha[1000];
	while( (c=fgetc(f)) != EOF){
		if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
			c='*';
		}
		fputc(c,g);
	}
}
