#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,m[3][3]={0},aux=0,aux2,l,c,cont;
    
    while(aux==0){
    	for(aux2=0;aux2==0;){
    		printf("Jogador 1 (x) -> Insira sua Jogada (linha, coluna): ");
    		scanf("%d%d",&l,&c);
    		if(m[l-1][c-1]==0){
    			m[l-1][c-1]=1;
    			aux2=1;
			}
			else{
				printf("\tCasa jah ocupada.\n");
			}
		}
    	for(i=0;i<3;i++){
    		for(j=0;j<3;++j){
    			printf("%d ",m[i][j]);
			}
			printf("\n");
		}
		//checar empate
		for(i=0,cont=0;i<3;i++){
			for(j=0;j<3;++j){
				if(m[i][j]!=0){
					cont++;
				}
				else{
					break;
				}
			}
		}
		if(cont==9){
			printf("Empate broxa");
			break;
		}
		//checar se 'x' ganhou
		for(i=0,j=0,k=3; ; ){
			if(
				(m[i][j]==1 && m[i][j+1]==1 && m[i][j+2]==1)    			||
				(m[i][j]==1 && m[i+1][j]==1 && m[i+2][j]==1)    			||
				(m[i+1][j]==1 && m[i+1][j+1]==1 && m[i+1][j+2]==1)			||
				(m[i+2][j]==1 && m[i+2][j+1]==1 && m[i+2][j+2]==1)			||
				(m[i][j]==1 && m[i+1][j+1]==1 && m[i+2][j+2]==1)			||
				(m[i][k-i-1]==1 && m[i+1][k-i-1-1]==1 && m[i+2][k-i-2-1]==1)
			){
				printf("Jogador 1 ganhou.");
				aux=1;
				break;
			}
			else{
				break;
			}
		}
		if(aux==1){
			break;
		}
		
		for(aux2=0;aux2==0;){
    		printf("Jogador 2 (o) -> Insira sua Jogada (linha, coluna): ");
    		scanf("%d%d",&l,&c);
    		if(m[l-1][c-1]==0){
    			m[l-1][c-1]=2;
				aux2=1;	
			}
			else{
				printf("\tCasa jah ocupada.\n");
			}
		}
		for(i=0;i<3;i++){
    		for(j=0;j<3;++j){
    			printf("%d ",m[i][j]);
			}
			printf("\n");
		}
		//checar se 'o' ganhou
		for(i=0,j=0,k=3; ; ){
			if(
				(m[i][j]==2 && m[i][j+1]==2 && m[i][j+2]==2)    			||
				(m[i+1][j]==2 && m[i+1][j+1]==2 && m[i+1][j+2]==2)			||
				(m[i+2][j]==2 && m[i+2][j+1]==2 && m[i+2][j+2]==2)			||
				(m[i][j]==2 && m[i+1][j]==2 && m[i+2][j]==2)    			||
				(m[i][j]==2 && m[i+1][j+1]==2 && m[i+2][j+2]==2)			||
				(m[i][k-i-1]==2 && m[i+1][k-i-1-1]==2 && m[i+2][k-i-2-1]==2)
			){
				printf("Jogador 2 ganhou.");
				aux=1;
				break;
			}
			else{
				break;
			}
		}
	}

    return 0;
}
