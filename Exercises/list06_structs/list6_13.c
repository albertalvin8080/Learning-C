#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int verData(int d,int m,int a);

struct pessoa{
	char nome[15],cidade[15],endereco[30],email[30],cep[9];
	int nascimento[3];
	
}info;

int main()
{
	int i,j,aux1=0;
	char *t,manterEmail[30];
    
    printf("Insira seu nome: ");
    	scanf("%15[^\n]%*c",info.nome);
    printf("Agora seu endereco: ");
    	scanf("%30[^\n]%*c",info.endereco);
    printf("Agora sua cidade: ");
    	scanf("%15[^\n]%*c",info.cidade);
    printf("Agora seu e-mail: ");
    	scanf("%30[^\n]%*c",info.email);
    printf("Agora sua data de nascimento (dd/mm/aaaa): ");
    	scanf("%d%*c%d%*c%d%*c",&info.nascimento[0],&info.nascimento[1],
    	&info.nascimento[2]);
	printf("Agora seu cep (xxxxx-xxx): ");
		scanf("%9[^\n]%*c",info.cep);
	
	
	printf("\n-Nome: %s",info.nome);
	printf("\n-Endereco: %s",info.endereco);
	printf("\n-Cidade: %s\n",info.cidade);
	
	//e-mail
	strcpy(manterEmail,info.email);
	t = strtok(manterEmail,"@");
	t = strtok(NULL,"@");
	if(t==NULL){
		printf("*O email inserido eh invalido.\n");
	}
	else if(t!=NULL){
		printf("-E-mail: %s\n",info.email);
	}
	
	//Data de nascimento
	int confirmaData = verData(info.nascimento[0],info.nascimento[1],
		info.nascimento[2]);	
	if(confirmaData==0){
		printf("-Data de nascimento: %d/%d/%d\n",info.nascimento[0],info.nascimento[1],
		info.nascimento[2]);
	}
	else if(confirmaData==1){
		printf("*Data de nascimento invalida informada. Modelo: dd/mm/aaaa.\n");
	}
	
	//CEP
	int tamanhoCep = strlen(info.cep);
	if(info.cep[5]=='-' && tamanhoCep==9){
		printf("-CEP: %s",info.cep);
	}
	else if(info.cep[5]!='-'){
		printf("*O CEP informado nao segue o padrao requerido (xxxxx-xxx).");
	}
	else if(tamanhoCep!=9){
		printf("*O CEP informado estah incompleto.");
	}
	
    return 0;
}
int verData(int d,int m,int a){
	int i;
	if(m>12){
		return 1;
	}
	else if(d>31){
		return 1;
	}
	else if(d>28 && m==2){
		return 1;
	}
	else if(d==31 && (m==4 || m==6 || m==9 || m==11)){
		return 1;
	}
	else if(a<1900){
		return 1;
	}
	
	return 0;
}
