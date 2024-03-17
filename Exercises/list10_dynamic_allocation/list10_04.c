#include <stdio.h>
#include <stdlib.h>

void retiraVogal(char p[]);

int main()
{
	int tam;
    printf("Insira o tamanho da string: ");
    scanf("%d%*c",&tam);
	
	char *p = (char*) calloc(tam,sizeof(char));
	
	printf("Insira o conteudo da string: ");
	fgets(p,tam,stdin);
	
	retiraVogal(p);
	
    return 0;
}
void retiraVogal(char p[]){
	for(int i=0;p[i]!='\n';i++){
		if(p[i]!='a' && p[i]!='A' && p[i]!='e' && p[i]!='E' &&
		   p[i]!='i' && p[i]!='I' && p[i]!='o' && p[i]!='O' &&
		   p[i]!='u' && p[i]!='U'){
			
			printf("%c",p[i]);
		}else{
			printf(" ");
		}
	}
}

