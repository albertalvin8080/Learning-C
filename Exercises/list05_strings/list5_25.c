#include <stdio.h>

int main()
{
    int i,j;
    char s1[10],s2[10];
    
    printf("Digite uma palavra: ");
    scanf("%10[^\n]",s1);
    printf("Digite OUTRA palavra: ");
    scanf("%*c%10[^\n]",s2);
    
    if(s1[0]<s2[0]){
    	printf("%s\n%s",s1,s2);
	}
	else{
		printf("%s\n%s",s2,s1);
	}

    return 0;
}

