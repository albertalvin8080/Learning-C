#include <stdio.h>

int main()
{
    _Bool compararStr(char str1[], char str2[]);
    
    if(compararStr("casebre","casa")){
    	printf("Sao iguais.");
	}
	else{
		printf("Nao sao iguais.");
	}

    return 0;
}
_Bool compararStr(char str1[], char str2[]){
	int i=0;
	while(str1[i]==str2[i] && str1[i]!='\0'){
		++i;
	}
	
	if(str1[i]==str2[i]){
		return 1;
	}
	else{
		return 0;
	}
}
