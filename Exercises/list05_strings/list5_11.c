#include <stdio.h>

int main()
{
    int i;
    char str[100];
    printf("Digite uma palavra: ");
    gets(str);
    
    for(i=0;str[i]!='\0';++i){
    	if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
		   str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
    		str[i]='0';
		}
	}
	for(i=0;str[i]!='\0';++i){
		if(str[i]!='0'){
			printf("%c",str[i]);
		}
	}
	
    return 0;
}

