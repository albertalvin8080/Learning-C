#include <stdio.h>
#include <string.h>

int main()
{
    int i,j;
    char s1[50];
    
    printf("Insira uma string: ");
    scanf("%50[^\n]",s1);
    int t = strlen(s1);
    
    for(i=0;i<t;i++){
    	if(s1[i]==' '){
    		printf(" ");
		}
		else{
    		s1[i]+=3;
    		printf("%c",s1[i]);
		}
	}
	

    return 0;
}

