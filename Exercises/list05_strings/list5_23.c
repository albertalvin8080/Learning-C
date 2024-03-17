#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,a,b,maior,menor;
    char str[100]={0};
    
    printf("Insira uma string: ");
    scanf("%100[^\n]",str);
	printf("Digite dois numeros inteiros positivos: ");
	scanf("%d%d",&a,&b);
	
	if(a>b){
		maior=a;
		menor=b;
	}
	else if(b>a){
		maior=b;
		menor=a;
	}
	
	for(i=menor;i<=maior;i++){
		printf("%c",str[i-1]);
	}
	
	
	
    return 0;
}

