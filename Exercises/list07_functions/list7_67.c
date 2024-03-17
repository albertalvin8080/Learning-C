#include <stdio.h>
#define n 10
void rotina(char s[n]);

int main()
{
	char s[n];
    rotina(s);
    printf("\nString: %s",s);

    return 0;
}
void rotina(char s[n]){
	int i;
	printf("Insira um cacarter de str por vez: ");
	for(i=0;i<n && s[i-1]!='\n';i++){
		s[i]=getchar();	
	}if(s[i-1]=='\n'){
		s[i-1]='\0';
	}
}
