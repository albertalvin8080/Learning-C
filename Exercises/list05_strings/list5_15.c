#include <stdio.h>

int main()
{
    int i;
    char str[100],str2[100];
    
    printf("Insira uma frase: ");
    gets(str);
    
    for(i=0;str[i]!='\0';++i){
    	if(str[i]!=' '){
    		str2[i] = str[i]-32;
		}
		else{
			str2[i] = str[i];
		}
	}
	str2[i]='\0';
	printf("%s",str2);
	
    return 0;
}

