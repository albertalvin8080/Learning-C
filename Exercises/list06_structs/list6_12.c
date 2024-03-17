#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int check(int x,int y,int a[],int b[],int n);

struct baralho{
	char cartas[10];
}naipe[4][13];

int main()
{
	srand(time(NULL));
    int i,j,cont=0,checarL,checarC,aux,checador,checador2;
	int valor,randomL,randomC,comparaC[5],comparaL[5],comparaC2[5],comparaL2[5];
    char temp[20];

    for(i=0;i<4;i++){
    	for(valor=2,j=0;j<13;j++,valor++){
    		itoa(valor,temp,10);
    		if(valor<11){
    			strcpy(naipe[i][j].cartas,temp);
			}
			else if(valor==11){
				strcpy(naipe[i][j].cartas,"J");	
			}
			else if(valor==12){
				strcpy(naipe[i][j].cartas,"Q");	
			}
			else if(valor==13){
				strcpy(naipe[i][j].cartas,"K");	
			}
			else if(valor==14){
				strcpy(naipe[i][j].cartas,"A");	
			}
		}
	}

	printf("*Jogador 1*\n");
	for(i=0;i<5;i++){
		randomL = rand()%4;
		randomC = rand()%13;
		comparaL[i] = randomL;
		comparaC[i] = randomC;
		checador = check(randomL,randomC,comparaL,comparaC,cont);
		
		if(checador==0){
			if(randomL==0){
				printf("%s(paus) ",naipe[randomL][randomC].cartas);
			}
			else if(randomL==1){
				printf("%s(ouros) ",naipe[randomL][randomC].cartas);
			}
			else if(randomL==2){
				printf("%s(copas) ",naipe[randomL][randomC].cartas);
			}
			else if(randomL==3){
				printf("%s(espadas) ",naipe[randomL][randomC].cartas);
			}
		}
		else if(checador==1){
			i--;
			cont--;
		}
		cont++;
	}

	cont=0;
	printf("\n\n*Jogador 2*\n");
	for(i=0;i<5;i++){
		randomL = rand()%4;
		randomC = rand()%13;
		comparaL2[i] = randomL;
		comparaC2[i] = randomC;
		checador = check(randomL,randomC,comparaL,comparaC,5);
		checador2 = check(randomL,randomC,comparaL2,comparaC2,cont);
		
		if(checador==1){
			i--;
			cont--;
		}
		if(checador2==0 && checador==0){
			if(randomL==0){
			printf("%s(paus) ",naipe[randomL][randomC].cartas);
			}
			else if(randomL==1){
				printf("%s(ouros) ",naipe[randomL][randomC].cartas);
			}
			else if(randomL==2){
				printf("%s(copas) ",naipe[randomL][randomC].cartas);
			}
			else if(randomL==3){
				printf("%s(espadas) ",naipe[randomL][randomC].cartas);
			}
		}
		else if(checador2==1 && checador==0){
			i--;
			cont--;
		}
		
		cont++;
	}

    return 0;
}
int check(int x,int y,int a[],int b[],int n){
	int k;
	for(k=0;k<n;k++){
		if(x==a[k] && y==b[k]){
			return 1;
		}
	}
	return 0;
}

