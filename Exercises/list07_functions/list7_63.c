#include <stdio.h>
#define n 40
int compara(char s1[],char s2[]);

int main()
{
	char s1[n],s2[n];
    printf("Insira uma string: ");
    scanf("%40[^\n]%*c",s1);
    printf("Agora outra string: ");
    scanf("%40[^\n]%*c",s2);
    
    int ret=compara(s1,s2);
    if(ret==1){
    	printf("\nSao strings iguais.");
	}else{
		printf("\nNAO sao strings iguais.");
	}

    return 0;
}
int compara(char s1[],char s2[]){
	int i;
	for(i=0;s1[i]!='\0' && s2[i]!='\0';i++){
		if(s1[i]!=s2[i]){
			return 0;
		}
	}return 1;
}
