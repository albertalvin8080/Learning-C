#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 40
void intercalar(char s1[],char s2[],char sc[]);

int main()
{
	int num;
	char s1[n*2]={0},s2[n]={0},sc[2*n];
    printf("Insira uma string: ");
    scanf("%80[^\n]%*c",s1);
    printf("Agora outra string: ");
    scanf("%40[^\n]%*c",s2);
    
    intercalar(s1,s2,sc);
    
    printf("\nIntercalacao: %s",s1);

    return 0;
}
void intercalar(char s1[],char s2[],char sc[]){
	char temp;
	int i,j,aux1=1;
	int t1 = strlen(s1);
	int t2 = strlen(s2);
	for(i=0,j=0;i<=t1+t2;i+=2,j++){
		if(s1[j]!='\0' && s2[j]!='\0'){
			sc[i]=s1[j];
			sc[i+1]=s2[j];
		}else if(s1[j]=='\0' && s2[j]!='\0'){
			sc[i]=s2[j];
			i--;	
		}else if(s1[j]!='\0' && s2[j]=='\0'){
			sc[i]=s1[j];
			i--;
		}
	}int tc=strlen(sc);
	for(i=0;i<=tc;i++){
		s1[i]=sc[i];
	}
}
