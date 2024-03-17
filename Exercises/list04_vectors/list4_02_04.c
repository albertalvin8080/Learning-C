#include <stdio.h>

int main()
{
    int i,j,m[4][4],maior=-99999,coluna,linha;
    
    for(i=0;i<4;++i){
    	printf("Insira quatro valores pra linha %d: ",i+1);
    	for(j=0;j<4;++j){
    		scanf("%d",&m[i][j]);
    		if(m[i][j]>maior){
    			maior=m[i][j];
    			coluna=j+1;
    			linha=i+1;
			}
		}
	}
	for(i=0;i<4;++i){
    	for(j=0;j<4;++j){
    		printf("%d ",m[i][j]);
		}
		printf("\n");
	}
	printf("Linha: %d\nColuna: %d",linha,coluna);
	
    return 0;
}

