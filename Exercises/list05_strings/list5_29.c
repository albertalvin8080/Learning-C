#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int i,j,n;
    char s1[100]={'0'},s2[50]={'0'}; //talvez de problema
    
    printf("Insira uma string: ");
    	scanf("%100[^\n]%*c",s1);
    printf("Insira OUTRA string: ");
    	scanf("%50[^\n]%*c",s2);
    printf("Agora insira um numero positivo: ");
    	scanf("%d",&n);
 	
 	int t1 = strlen(s1);
 	
 	for(i=t1,j=0;j<n;i++,j++){
 		s1[i]=s2[j];
	}
	s1[i]=NULL;
 	printf("%s",s1);
 	
    return 0;
}

