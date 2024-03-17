#include <stdio.h>
#define n 1

int checarCod(int Cod);

struct produtos{
	char nome[15];
	int codigo,quant;
	float preco;
} info[5];

int main()
{
    int i,Cod=1,quantC,cc,cq;
    
    for(i=0;i<n;i++){
    	printf("Insira o nome do produto n%d: ",1+i);
    	scanf("%15[^\n]",info[i].nome);
    	printf("Agora o codigo: ");
    	scanf("%d",&info[i].codigo);
    	printf("Agora a quantidade disponivel: ");
    	scanf("%d",&info[i].quant);
    	printf("Agora o preco: ");
    	scanf("%d%*c",&info[i].preco);
	}
	
	for( ;Cod!=0; ){
		printf("\nInforme um codigo de produto: ");
		scanf("%d",&Cod);
		if(Cod==0){
			break;
		}
		cc = checarCod(Cod);
		if(cc==99){
			printf("Codigo inserido inexistente.\n");
		}
		else if(cc!=99 && info[cc].quant==0){
			printf("Nao temos mais desse produto.\n");
		}
		else if(cc!=99 && info[cc].quant>0){
			printf("Agora a quantidade que deseja comprar: ");
			scanf("%d",&quantC);
			if(quantC<1){
				printf("Quantidade invalida.\n");
			}
			else if(info[cc].quant>=quantC && quantC>0){
				printf("Voce escolheu %d %ss\n",quantC,
					info[cc].nome);
				info[cc].quant-=quantC;
			}
			else if(info[cc].quant<quantC && quantC>0){
				printf("A quantidade requisitada excede o estoque. (%d)\n",
					info[cc].quant);
			}
		}
	}

    return 0;
}
int checarCod(int Cod){
	int j;
	for(j=0;j<n;j++){
		if(Cod==info[j].codigo){
			return j;
		}
	}
	return 99;
}
