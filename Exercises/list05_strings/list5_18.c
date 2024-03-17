#include <stdio.h>

int main()
{
    int i;
    char str[100],str2[100],l1,l2;
    
    printf("Insira uma frase: ");
    gets(str);
    printf("Agora uma letra para ser substituida: ");
    scanf("%c%*c",&l1);
    printf("Agora uma letra no lugar daquela: ");
    scanf("%c%*c",&l2);
    
	for(i=0;str[i]!='\0';++i){
		if(str[i]==l1){
			str[i]=l2;
		}
	}
	printf("%s",str);
	
    return 0;
}
