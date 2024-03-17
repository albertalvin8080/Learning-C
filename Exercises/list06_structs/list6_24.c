#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menu(char c,int n);

typedef struct{
	char rua[40],numero[10],complemento[100],bairro[40];
	char CEP[10],cidade[30],estado[20],pais[20];
}Endereco;

typedef struct{
	char DDD[5],numero[20];
}Telefone;

typedef struct{
	int dia,mes,ano;
}Aniversario;

typedef struct{
	char nome[25],email[40],obs[100];
	Endereco endereco;
	Telefone telefone;
	Aniversario aniversario;
}Agenda;
Agenda agenda[100];

int main()
{
	char c;
	int i,n;
	printf("Quantas pessoas voce quer armazenar?: ");
	scanf("%d%*c",&n);
	if(n>100){
		printf("Limite de 100 pessoas.");
		return 0;
	}
	else if(n<1){
		printf("Entao tchau.");
		return 0;
	}
	
	for(i=0;i<n;i++){
		printf("\nInsira o nome da pessoa n%d: ",i+1);
			scanf("%25[^\n]%*c",agenda[i].nome);
		printf("Agora o e-mail: ");
			scanf("%40[^\n]%*c",agenda[i].email);
		printf("Agora o nome da rua: ");
			scanf("%40[^\n]%*c",agenda[i].endereco.rua);
		printf("Numero da casa: ");
			scanf("%10[^\n]%*c",agenda[i].endereco.numero);	
		printf("Complemento: ");
			scanf("%100[^\n]%*c",agenda[i].endereco.complemento);
		printf("Bairro: ");
			scanf("%40[^\n]%*c",agenda[i].endereco.bairro);
		printf("CEP: ");
			scanf("%10[^\n]%*c",agenda[i].endereco.CEP);
		printf("Cidade: ");
			scanf("%30[^\n]%*c",agenda[i].endereco.cidade);
		printf("Estado: ");
			scanf("%20[^\n]%*c",agenda[i].endereco.estado);
		printf("Pais: ");
			scanf("%20[^\n]%*c",agenda[i].endereco.pais);
		printf("DDD: ");
			scanf("%5[^\n]%*c",agenda[i].telefone.DDD);
		printf("Numero de telefone: ");
			scanf("%20[^\n]%*c",agenda[i].telefone.numero);
		printf("Agora seu aniversario (dd/mm/aaaa): ");
			scanf("%d%*c%d%*c%d%*c",&agenda[i].aniversario.dia,
			&agenda[i].aniversario.mes,&agenda[i].aniversario.ano);
		printf("Coloque uma observacao qualquer: ");
			scanf("%100[^\n]%*c",agenda[i].obs);
	}
	
	while(c!='a'&&c!='b'&&c!='c'&&c!='d'&&c!='e'&&c!='f'){
		printf("\nEscolha uma das opcoes abaixo:\n");
		printf("\t(a) Buscar alguem pelo nome\n");
		printf("\t(b) Imprimir aniversariantes no mes X\n");
		printf("\t(c) Imprimir aniversariantes no mes X e dia Y\n");
		printf("\t(d) Inserir nome em ordem alfabetica\n");
		printf("\t(e) Retirar uma pessoa\n");
		printf("\t(f) Imprime agenda\n\t");
		scanf("%c%*c",&c);
	}
	menu(c,n);

    return 0;
}
void menu(char c,int n){
	int i,j,dia,mes,aux=0,aux2=0,op;
	char *p,nome[20],temp[20];
	switch(c){
		case 'a':
			printf("Insira um nome: ");
			scanf("%20[^\n]%*c",nome);
			for(j=0;j<n;j++){
				p = strstr(agenda[j].nome,nome);
				if(p!=NULL){
					printf("\n *%da pessoa: %s\n",j+1,agenda[j].nome);
					printf("- E-mail: %s\n",agenda[j].email);
					printf("- Rua: %s\n",agenda[j].endereco.rua);
					printf("- Casa: %s\n",agenda[j].endereco.numero);
					printf("- Complemento: %s\n",agenda[j].endereco.complemento);
					printf("- Bairro: %s\n",agenda[j].endereco.bairro);
					printf("- CEP: %s\n",agenda[j].endereco.CEP);
					printf("- Cidade: %s\n",agenda[j].endereco.cidade);
					printf("- Estado: %s\n",agenda[j].endereco.estado);
					printf("- Pais: %s\n",agenda[j].endereco.pais);
					printf("- DDD: %s\n",agenda[j].telefone.DDD);
					printf("- Telefone: %s\n",agenda[j].telefone.numero);
					printf("- Aniversario: %d/%d/%d\n",agenda[j].aniversario.dia,
						   agenda[j].aniversario.mes,agenda[j].aniversario.ano);
					printf("- OBS: %s\n",agenda[j].obs);
				}
				else if(p==NULL){
					printf("Ninguem encontrado. ");
				}
			}
			break;
			
		case 'b':
			printf("Insira um mes: ");
			scanf("%d%*c",&mes);
			printf("\nAniversariantes: \n");
			for(j=0;j<n;j++){
				if(mes==agenda[j].aniversario.mes){
					printf(" %s\n",agenda[j].nome);
					aux=1;
				}
			}
			if(aux==0){
				printf("Ninguem encontrado.");
			}
			break;
			
		case 'c':
			printf("Insira um dia e um mes: ");
			scanf("%d%d",&dia,&mes);
			printf("\nAniversariantes: \n");
			for(j=0;j<n;j++){
				if(mes==agenda[j].aniversario.mes &&
				   dia==agenda[j].aniversario.dia){
					printf(" %s\n",agenda[j].nome);
					aux=1;
				}
			}
			if(aux==0){
				printf("Ninguem encontrado.");
			}
			break;
			
		case 'd':
			printf("Insira um nome: ");
			scanf("%20[^\n]%*c",agenda[n].nome);
			n++;
			for(i=0;i<n;i++){
    			for(j=i+1;j<n;j++){
    				if(strcmp(agenda[i].nome,agenda[j].nome)>0){
    					strcpy(temp,agenda[i].nome);
            			strcpy(agenda[i].nome,agenda[j].nome);
            			strcpy(agenda[j].nome,temp);
					}
				}
			}
			for(i=0;i<n;i++){
				printf(" %s\n",agenda[i].nome);
			}
			break;
			
		case 'e':
			printf("Insira uma pessoa para retirar: ");
			scanf("%20[^\n]%*c",nome);
			for(i=0;i<n;i++){
				p = strstr(agenda[i].nome,nome);
				if(p!=NULL){
					for(j=i+1;j<n;j++){
						strcpy(agenda[i+aux2].nome,agenda[j].nome);
						strcpy(agenda[i+aux2].email,agenda[j].email);
						strcpy(agenda[i+aux2].obs,agenda[j].obs);
						agenda[i+aux2].aniversario.ano=agenda[j].aniversario.ano;
						agenda[i+aux2].aniversario.dia=agenda[j].aniversario.dia;
						agenda[i+aux2].aniversario.mes=agenda[j].aniversario.mes;
						strcpy(agenda[i+aux2].endereco.bairro,agenda[j].endereco.bairro);
						strcpy(agenda[i+aux2].endereco.CEP,agenda[j].endereco.CEP);
						strcpy(agenda[i+aux2].endereco.cidade,agenda[j].endereco.cidade);
						strcpy(agenda[i+aux2].endereco.complemento,agenda[j].endereco.complemento);
						strcpy(agenda[i+aux2].endereco.estado,agenda[j].endereco.estado);
						strcpy(agenda[i+aux2].endereco.numero,agenda[j].endereco.numero);
						strcpy(agenda[i+aux2].endereco.pais,agenda[j].endereco.pais);
						strcpy(agenda[i+aux2].endereco.rua,agenda[j].endereco.rua);
						strcpy(agenda[i+aux2].telefone.DDD,agenda[j].telefone.DDD);
						strcpy(agenda[i+aux2].telefone.numero,agenda[j].telefone.numero);
						aux2++;
					}
					n--;
					aux=1;
					break;
				}
			}
			if(aux==0){
				printf("Ninguem com esse nome encontrado.");
				break;
			}
			for(j=0;j<n;j++){
				printf("\n *%da pessoa: %s\n",j+1,agenda[j].nome);
				printf("- E-mail: %s\n",agenda[j].email);
				printf("- Rua: %s\n",agenda[j].endereco.rua);
				printf("- Casa: %s\n",agenda[j].endereco.numero);
				printf("- Complemento: %s\n",agenda[j].endereco.complemento);
				printf("- Bairro: %s\n",agenda[j].endereco.bairro);
				printf("- CEP: %s\n",agenda[j].endereco.CEP);
				printf("- Cidade: %s\n",agenda[j].endereco.cidade);
				printf("- Estado: %s\n",agenda[j].endereco.estado);
				printf("- Pais: %s\n",agenda[j].endereco.pais);
				printf("- DDD: %s\n",agenda[j].telefone.DDD);
				printf("- Telefone: %s\n",agenda[j].telefone.numero);
				printf("- Aniversario: %d/%d/%d\n",agenda[j].aniversario.dia,
					   agenda[j].aniversario.mes,agenda[j].aniversario.ano);
				printf("- OBS: %s\n",agenda[j].obs);
			}
			break;
			
		case 'f':
			printf("Escolha uma opcao:\n");
			printf("\t1. Imprimir nome, e-mail e telefone\n");
			printf("\t2. Imprimir todos os dados\n\t");
			scanf("%d",&op);
			if(op==1){
				for(j=0;j<n;j++){
					printf("\n *%da pessoa: %s\n",j+1,agenda[j].nome);
					printf("- E-mail: %s\n",agenda[j].email);
					printf("- DDD: %s\n",agenda[j].telefone.DDD);
					printf("- Numero de telefone: %s\n",agenda[j].telefone.numero);
				}
			}
			else if(op==2){
				for(j=0;j<n;j++){
					printf("\n *%da pessoa: %s\n",j+1,agenda[j].nome);
					printf("- E-mail: %s\n",agenda[j].email);
					printf("- Rua: %s\n",agenda[j].endereco.rua);
					printf("- Casa: %s\n",agenda[j].endereco.numero);
					printf("- Complemento: %s\n",agenda[j].endereco.complemento);
					printf("- Bairro: %s\n",agenda[j].endereco.bairro);
					printf("- CEP: %s\n",agenda[j].endereco.CEP);
					printf("- Cidade: %s\n",agenda[j].endereco.cidade);
					printf("- Estado: %s\n",agenda[j].endereco.estado);
					printf("- Pais: %s\n",agenda[j].endereco.pais);
					printf("- DDD: %s\n",agenda[j].telefone.DDD);
					printf("- Telefone: %s\n",agenda[j].telefone.numero);
					printf("- Aniversario: %d/%d/%d\n",agenda[j].aniversario.dia,
						   agenda[j].aniversario.mes,agenda[j].aniversario.ano);
					printf("- OBS: %s\n",agenda[j].obs);
				}	
			}
			break;
	}
}

//lixo
/*for(i=0;i<n;i++){
		strcpy(agenda[i].nome,"iai");
		agenda[i].email="2";
		agenda[i].endereco.rua="2";
		agenda[i].endereco.numero="2";
		agenda[i].endereco.complemento="2";
		agenda[i].endereco.bairro="2";
		agenda[i].endereco.CEP="2";
		agenda[i].endereco.cidade="2";
		agenda[i].endereco.estado="2";
		agenda[i].endereco.pais="2";
		agenda[i].telefone.DDD="2";
		agenda[i].telefone.numero="2";
		agenda[i].aniversario.dia=2;
		agenda[i].aniversario.mes=2;
		agenda[i].aniversario.ano=2;
		agenda[i].obs="2";
	}*/
