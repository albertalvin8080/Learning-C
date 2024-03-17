#include <stdio.h>
#include <string.h>

struct pessoas{
	char nome[20],endereco[30],telefone[15];
};

int main()
{
	char temp[20];
	int i,j;
    struct pessoas info[5];
    
    for(i=0;i<5;i++){
    	printf("Insira o nome, endereco e telefone da pessoa n%d: ",i+1);
    	scanf("%20[^\n]%*c%30[^\n]%*c%15[^\n]%*c",info[i].nome,info[i].endereco,info[i].telefone);
    	//scanf("%20[^\n]%*c",info[i].nome);
	}
    for(i=0;i<5;i++){
    	for(j=i+1;j<5;j++){
    		if(strcmp(info[i].nome,info[j].nome)>0){
            strcpy(temp,info[i].nome);
            strcpy(info[i].nome,info[j].nome);
            strcpy(info[j].nome,temp);
            
            strcpy(temp,info[i].endereco);
            strcpy(info[i].endereco,info[j].endereco);
            strcpy(info[j].endereco,temp);
            
            strcpy(temp,info[i].telefone);
            strcpy(info[i].telefone,info[j].telefone);
            strcpy(info[j].telefone,temp);
        	}
    	}
	}
	
	for(i=0;i<5;i++){
		printf("\n%s\n Telefone: %s\n Endereco: %s\n",
		info[i].nome,info[i].telefone,info[i].endereco);
	}
	
    return 0;
}
