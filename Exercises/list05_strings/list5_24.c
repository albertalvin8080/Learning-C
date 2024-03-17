#include <stdio.h>

int main()
{
    int i,p,p2;
    char str[50],c;
    
    printf("Insira uma string: ");
    scanf("%50[^\n]",str);
    printf("Agora um caractere: ");
    scanf("%*c%c",&c);
    printf("Agora uma posicao: ");
    scanf("%d",&p);
    p-=1;
    
    for(i=p; ;i++){
    	if(str[i]==c){
    		p2=i+1;
    		break;
		}
	}
	printf("%d (%d na string)",p2,p2-1);

    return 0;
}

