#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 5

typedef struct{
	char rua[50],estado[20],cidade[20],bairro[20];
	int CEP;
}Endereco;

typedef struct{
	char nome[25],estadoCivil[20],sexo[2];
	int identidade,telefone,CPF,idade;
	float salario;
	Endereco endereco;
}Cadastro;

int main()
{
	char sexocmp1[2]="M",sexocmp2[2]="m";
	int i,j,aux,maior=0,manterI,ident;
    Cadastro cadastro[5];
    
    for(i=0;i<n;i++){
    	printf("Insira o nome do individuo n%d: ",i+1);
    		scanf("%25[^\n]%*c",cadastro[i].nome);
	    printf("Agora o sexo (M/F): ");
	    	scanf("%2[^\n]%*c",cadastro[i].sexo);
    	printf("Estado Civil: ");
    		scanf("%20[^\n]%*c",cadastro[i].estadoCivil);
    	printf("Idade: ");
    		scanf("%d",&cadastro[i].idade);
    	if(cadastro[i].idade>maior){
    		maior=cadastro[i].idade;
    		manterI=i;
		}
    	printf("Numero de identidade: ");
    		scanf("%d",&cadastro[i].identidade);
    	printf("CPF: ");
    		scanf("%d",&cadastro[i].CPF);
    	printf("Numero de telefone: ");
    		scanf("%d",&cadastro[i].telefone);
    	printf("Salario: ");
    		scanf("%f%*c",&cadastro[i].salario);
    	printf("Estado onde vive: ");
    		scanf("%20[^\n]%*c",&cadastro[i].endereco.estado);
    	printf("Cidade: ");
    		scanf("%20[^\n]%*c",&cadastro[i].endereco.cidade);
    	printf("Bairro: ");
    		scanf("%20[^\n]%*c",&cadastro[i].endereco.bairro);
    	printf("Rua: ");
    		scanf("%50[^\n]%*c",&cadastro[i].endereco.rua);
    	printf("CEP: ");
    		scanf("%d%*c",&cadastro[i].endereco.CEP);
    	printf("\n");
	}
	
	printf("*PESSOA COM A MAIOR IDADE*\n");
	printf("- Nome: %s\n",cadastro[manterI].nome);
	printf("- Idade: %d ano(s)\n",cadastro[manterI].idade);
	
	printf("\n*INDIVIDUOS DO SEXO MASCULINO*\n");
	for(aux=0,i=0;i<n;i++){
		if(strcmp(cadastro[i].sexo,sexocmp1)==0 ||
		   strcmp(cadastro[i].sexo,sexocmp2)==0){
			printf("- %do: %s\n",i+1,cadastro[i].nome);	
			aux=1;
		}
	}
	if(aux==0){
		printf("Ninguem encontrado.\n");
	}
	
	printf("\n*Individuos com salario acima de RS1000.00*");
	for(aux=0,i=0;i<n;i++){
		if(cadastro[i].salario>1000.0){
			printf("\n *%da Pessoa: %s\n",i+1,cadastro[i].nome);
			printf("- Salario: RS%.2f\n",cadastro[i].salario);
			aux=1;
		}
	}
	if(aux==0){
		printf("\nNinguem encontrado.\n");
	}
	
	printf("\nInsira uma identidade: ");
	scanf("%d",&ident);
	printf("\n*Dados do individuo com identidade = %d*\n",ident);
	for(aux=0,i=0;i<n;i++){
		if(ident==cadastro[i].identidade){
			printf("\n- Nome: %s\n",cadastro[i].nome);
			printf("- Sexo: %s\n",cadastro[i].sexo);
			printf("- Estado Civil: %s\n",cadastro[i].estadoCivil);
			printf("- Idade: %d\n",cadastro[i].idade);
			printf("- Numero de Identidade: %d\n",cadastro[i].identidade);
			printf("- CPF: %d\n",cadastro[i].CPF);
			printf("- Numero de telefone: %d\n",cadastro[i].telefone);
			printf("- Salario: RS%.2f\n",cadastro[i].salario);
			printf("- Estado onde vive: %s\n",cadastro[i].endereco.estado);
			printf("- Cidade: %s\n",cadastro[i].endereco.cidade);
			printf("- Bairro: %s\n",cadastro[i].endereco.bairro);
			printf("- Rua: %s\n",cadastro[i].endereco.rua);
			printf("- CEP: %d\n",cadastro[i].endereco.CEP);
			aux=1;
		}
	}
	if(aux==0){
		printf("Ninguem encontrado.\n");
	}

    return 0;
}

