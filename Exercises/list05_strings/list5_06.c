#include <stdio.h>

int main()
{
	char nome[20],sexo;
	int idade;
	
    printf("Digite seu nome: ");
    gets(nome);
    printf("Agora seu sexo (M ou F): ");
    scanf("%c",&sexo);
    printf("Insira sua idade: ");
    scanf("%d",&idade);
    if((sexo=='f' || sexo=='F') && idade<25){
    	printf("Aceita.");
	}
	else{
		printf("NAO ACEITA.");
	}
	
    

    return 0;
}

