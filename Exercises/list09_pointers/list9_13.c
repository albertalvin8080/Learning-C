#include <stdio.h>
#include <string.h>
int dentro(char s1[],char s2[]);

int main()
{
	char a1[20],a2[20];
    printf("Insira uma string: ");
    scanf("%20[^\n]%*c",a1);
    printf("Insira outra string: ");
    scanf("%20[^\n]%*c",a2);
    int check = dentro(a1,a2);
    if(check==1){
    	printf("%s estah em %s",a2,a1);
	}else{
		printf("%s NAO estah em %s",a2,a1);
	}

    return 0;
}
int dentro(char s1[],char s2[]){
	int j,cont=0;
	char *p1=s1,*p2=s2;
	int t2 = strlen(s2);
	
	for(j=0;*p1!='\0';j++){
		if(*p2==*p1){
			p2++;
			cont++;
		}
		else if(*p2!=*p1 && *p1==*s2){
			p1--;
			p2=s2;
			cont=0;
		}
		else{
			p2=s2;
			cont=0;
		}
		if(cont==t2){
			return 1;
		}
		p1++;
	}
	
	return 0;
}
