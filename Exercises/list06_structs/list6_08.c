#include <stdio.h>
struct funcio{
	char nome[30],cargo[30],sexo,nascimento[10];
	int idade,cpf,setor;
	float salario;
};

int main()
{
	struct funcio info;
	
    printf("Insira o nome do funcionario: ");
    scanf("%30[^\n]%*c",info.nome);
    printf("Agora o sexo (M/F): ");
    scanf("%c%*c",&info.sexo);
    printf("Agora a data de nascimento (dd/mm/aa): ");
    scanf("%10[^\n]%*c",info.nascimento);
    printf("Agora a idade: ");
    scanf("%d%*c",&info.idade);
    printf("Agora o setor: ");
    scanf("%d%*c",&info.setor);
    printf("Agora o CPF: ");
    scanf("%d%*c",&info.cpf);
    printf("Agora o Cargo: ");
    scanf("%30[^\n]%*c",info.cargo);
    printf("Por ultimo, o salario: ");
    scanf("%f%*c",&info.salario);
    
    printf("\n- Nome: %s\n- Sexo: %c\n- Data de nascimento: %s\n- Idade: %d\n- Setor: %d\n"
	"- CPF: %d\n- Cargo: %s\n- Salario = %.2f",
	info.nome,info.sexo,info.nascimento,info.idade,info.setor,info.cpf,info.cargo,info.salario);

    return 0;
}

