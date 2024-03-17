#include <stdio.h>
#include <string.h>
#define n 40
int anagrama(char s1[],char s2[]);

int main()
{
	char s1[n],s2[n];
    printf("Insira a string n1: ");
    scanf("%40[^\n]%*c",s1);
    printf("Agora a string n2: ");
    scanf("%40[^\n]%*c",s2);
    
    int ret=anagrama(s1,s2);
    if(ret==1){
    	printf("\nSao anagramas.");
	}else{
		printf("\nNAO sao anagramas.");
	}

    return 0;
}
int anagrama(char s1[],char s2[]){
	int i,j,t1,t2,cont=0;
	t1 = strlen(s1);
	t2 = strlen(s2);
	if(t1!=t2){
		return 0;
	}
	for(i=0;i<t1;i++){
		for(j=0;j<t2;j++){
			if(s1[i]==s2[j]){
				cont++;
			}
		}
	}if(cont==t1){
		return 1;
	}else{
		return 0;
	}
}
