#include <stdio.h>
#include <string.h>
#define tam 40
int compara(char s1[],char s2[]);

int main()
{
	char s1[tam],s2[tam];
    printf("Insira a string n1: ");
    scanf("%40[^\n]%*c",s1);
    printf("Agora a string n2: ");
    scanf("%40[^\n]%*c",s2);
    
    int posicao = compara(s1,s2);
    if(posicao<0){
    	printf("\n'%s' NAO estah contida em '%s'.",s2,s1);
	}else{
		printf("\n'%s' estah contida em '%s'.\nPosicao de verificacao = %d",s2,s1,posicao);
	}

    return 0;
}

int compara(char s1[],char s2[]){
	int i=0,j=0,cont=0,posicao;
	while(s1[i]!='\0'){
		if(s1[i]==s2[j]){
			j++;
			cont++;
		}else if(s1[i]!=s2[j] && s1[i]==s2[0]){
			i--;
			j=0;
			cont=0;
		}else{
			j=0;
			cont=0;
		}
		if(cont==1){
			posicao=i;
		}
		if(cont==strlen(s2)){
			return posicao;
		}
		i++;
	}return -1;
}
