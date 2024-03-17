#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,k=0;
    char s1[50],s2[50];
    
    printf("Insira uma string: ");
    scanf("%50[^\n]%*c",s1);
    printf("Insira OUTRA string: ");
    scanf("%50[^\n]",s2);
    
    int t1=strlen(s1);
    int t2=strlen(s2);
    
    
    for(i=t1-1,j=t2-1;j>=0;--i,--j){
    	if(s1[i]==s2[j]){
    		k++;
		}
	}
	if(k==t2){
		printf("Estah contida.");
	}
	else{
		printf("Nao estah contida.");
	}
	
    return 0;
}
