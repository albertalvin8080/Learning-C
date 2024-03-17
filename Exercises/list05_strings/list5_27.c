#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i,j,k=0,aux,l=0,l2=1,n=0;
    char s1[50],sm[50],c;
    
    printf("Insira uma string: ");
    scanf("%50[^\n]",s1);
    strcpy(sm,s1);
    
    for(i=0;s1[i];i++){
    	s1[i] = tolower(s1[i]);
	}
    
    for(i=0;s1[i]!='\0';i++){
    	if(s1[i]==' ' || s1[i]=='-' || s1[i]==',' || s1[i+l2]=='.'){
    		if(s1[i+l2]==' ' || s1[i+l2]=='-' || s1[i+l2]==',' || s1[i+l2]=='.'){
    			n++;
			}
    		while(s1[i+l]!='\0'){
    			s1[i+l]=s1[i+l2];
    			l++;
    			l2++;
			}
			i-=n;
			n=0;
			l=0;
			l2=1;
		}
		
	}
    
    int t = strlen(s1);
    if(t%2==0){
    	aux=t/2;
	}
	else if(t%2!=0){
		aux=(t+1)/2;
	}
	
    for(i=0,j=t-1;i<=j;i++,j--){
    	if(s1[i]==s1[j]){
    		k++;
		}
		else{
			break;
		}
	}
	
	if(k==aux){
		printf("'%s' eh um palindromo.",sm);
	}
	else{
		printf("'%s' NAO eh um palindromo.",sm);
	}
	
    return 0;
}

