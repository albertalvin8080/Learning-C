#include <stdio.h>
#include <stdlib.h>

struct produtos{
	float preco;
	char nomeP[40];
}info[100];

int lerARQ(char arq[]);

struct somaProdutos{
	float soma;
}inf2;

int main()
{
	char arq[40];
    printf("Insira o nome do ARQ: ");
    scanf("%40[^\n]%*c",arq);
    
    int contador = lerARQ(arq);
    
    for(int i=0;i<contador;i++){
    	printf("%s = %.2f\n",info[i].nomeP,info[i].preco);
	}
	printf("\nTotal a pagar = R$%.2f",inf2.soma);

    return 0;
}
int lerARQ(char arq[]){
	FILE *f;
	f=fopen(arq,"r");
	
	if(f==NULL){
		printf("\nFalha ao abrir arquivo.");
		exit(1);
	}
	
	int i=0;
	inf2.soma=0;
	while( fscanf(f,"%40[^/]%*c %f%*c",info[i].nomeP,&info[i].preco) != EOF ){
		inf2.soma+=info[i].preco;
		
		i++;
	}
	
	fclose(f);
	
	return i;
}
