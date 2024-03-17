#include <stdio.h>

int main()
{
    int i,j,m[5][5],n,cont=0,linha,coluna;
    
    for(i=0;i<5;++i){
    	printf("Insira cinco valores para a linha %d: ",i+1);
    	for(j=0;j<5;++j){
    		scanf("%d",&m[i][j]);
		}
	}
	printf("Agora insira UM numero inteiro: ");
	scanf("%d",&n);
	
	for(i=0;i<5;++i){
    	for(j=0;j<5;++j){
    		if(m[i][j]==n){
    			linha=i+1;
    			coluna=j+1;
			}
			else{
				cont++;
			}
    		printf("%d ",m[i][j]);
		}
		printf("\n");
	}
	if(cont==25){
		printf("Nenhum valor encontrado.");
	}
	else{
		printf("Linha = %d\nColuna = %d",linha,coluna);
	}

    return 0;
}

