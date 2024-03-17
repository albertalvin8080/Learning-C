#include <stdio.h>
struct informacoes{
	int idade;
	char nome[30],endereco[80];
};

int main()
{
	struct informacoes info;
    printf("Insira seu nome: ");
    scanf("%30[^\n]",info.nome);
    printf("Agora sua idade: ");
    scanf("%d%*c",&info.idade);
    printf("Por ultimo seu endereco: ");
    scanf("%80[^\n]%*c",info.endereco);
    
    printf("\nNome: %s\nIdade: %d\nEndereco: %s",info.nome,info.idade,info.endereco);

    return 0;
}

