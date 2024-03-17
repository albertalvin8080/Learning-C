#include <stdio.h>

int main()
{
    int i,quant=0;
    char str[100],v;
    printf("Digite uma palavra: ");
    gets(str);
    printf("Agora digite uma letra: ");
    scanf("%c",&v);
    
    for(i=0;str[i]!='\0';++i){
    	if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
		   str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
    		str[i]=v;
    		quant++;
		}
	}
	for(i=0;str[i]!='\0';++i){
		if(str[i]!='0'){
			printf("%c",str[i]);
		}
	}
	printf("\nQuantidade de vogais: %d",quant);
	
    return 0;
}
