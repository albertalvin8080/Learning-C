#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 40
void concatenar(char s1[],char s2[],int num);

int main()
{
	int num;
	char s1[n*2],s2[n];
    printf("Insira uma string: ");
    scanf("%80[^\n]%*c",s1);
    printf("Agora outra string: ");
    scanf("%40[^\n]%*c",s2);
    printf("Agora um numero: ");
    scanf("%d",&num);
    
    concatenar(s1,s2,num);
    printf("\nConcatenacao (Num=%d): %s",num,s1);

    return 0;
}
void concatenar(char s1[],char s2[],int num){
	int i,aux=0,t1,t2;
	t1=strlen(s1);
	t2=strlen(s2);
	for(i=0;i<num;i++){
		s1[t1+aux]=s2[i];
		aux++;
		if(num-1==i){
			s1[t1+aux]=NULL;
		}
	}
}
