#include <stdio.h>
#define n 5

int checaCod(int cod);

struct V{
	int aeroOrigem, aeroDestino;
}voo[5];

struct A{
	int aeroMain,qSai,qChega;
}aero[5];

int main()
{
    int i,k=1,co,cd;
    for(i=0;i<5;i++){
    	aero[i].aeroMain = i;
    	aero[i].qSai = 2;
    	aero[i].qChega = 2;
    	k=0;
	}
	
	for(i=0;i<n;i++){
		printf("Informe o codigo do aeroporto de ORIGEM do voo n%d: ",1+i);
		scanf("%d",&voo[i].aeroOrigem);
		co = checaCod(voo[i].aeroOrigem);
		if(co==99){
			printf("Codigo de origem invalido. Pedido rejeitado.\n\n");
			continue;
		}
		else if(aero[co].qSai==0){
			printf("O limite de viagens partindo do aeroporto %d ja foi atingido.\n\n",co);
			continue;
		}
		printf("Agora o codigo do aeroporto de DESTINO: ");
		scanf("%d",&voo[i].aeroDestino);
		cd = checaCod(voo[i].aeroDestino);
		if(cd==co){
			printf("O local de origem e o destino NAO podem ser iguais.\n\n");
			continue;
		}
		else if(cd==99){
			printf("Codigo de destino invalido. Pedido rejeitado.\n\n");
			continue;
		}
		else if(aero[cd].qChega==0){
			printf("O limite de viagens com destino ao aeroporto %d ja foi atingido.\n\n",cd);
			continue;
		}
		printf("Seu pedido foi aprovado.\n\n");
		aero[co].qSai-=1;
		aero[cd].qChega-=1;
	}
	
    return 0;
}
int checaCod(int cod){
	int j;
	for(j=0;j<5;j++){
		if(cod==aero[j].aeroMain){
			return j;
		}
	}
	return 99;
}
