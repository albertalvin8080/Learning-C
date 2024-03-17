#include <stdio.h>
#include <string.h>
int compara(char s1[],char s2[]);

int main()
{
	char s1[30],s2[30];
    printf("Insira a primeira string: ");
    scanf("%30[^\n]%*c",s1);
    printf("Agora a segunda string: ");
    scanf("%30[^\n]%*c",s2);
    
    int retorno = compara(s1,s2);
    if(retorno==0){
    	printf("'%s' estah contida em '%s'",s1,s2);
	}else{
		printf("'%s' NAO estah contida em '%s'",s1,s2);
	}

    return 0;
}
int compara(char s1[],char s2[]){
	int j,cont=0,aux=0;
	int t1 = strlen(s1);
	
	for(j=0;s2[j]!='\0';j++){
		if(s2[j]==s1[aux]){
			cont++;
			aux++;
		}else if(s2[j]!=s1[aux] && s1[0]==s2[j]){
			cont=0;
			aux=0;
			j--;
		}else{
			cont=0;
			aux=0;
		}
		
		if(cont==t1){
			return 0;
		}		
	}
	return 1;
}
