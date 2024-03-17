#include <stdio.h>
#include <string.h>

int main()
{
	int i,j;
    char fr1[50]={0},fr2[50]={0};
    
    printf("Digite uma frase: ");
    scanf("%50[^\n]",fr1);
    printf("Digite OUTRA frase: ");
    scanf("%*c%50[^\n]",fr2);
    
    int quant = strlen(fr1);
    for(i=quant-1;i>=0;--i){
    	if(fr1[i]=='a' || fr1[i]=='A'){
			printf("*");
		}
		else{
			printf("%c",fr1[i]);
		}
	}
	printf("\n");
	
	quant=strlen(fr2);
	for(i=quant-1;i>=0;--i){
		if(fr2[i]=='a' || fr2[i]=='A'){
			printf("*");
		}
		else{
			printf("%c",fr2[i]);
		}
	}

    return 0;
}

