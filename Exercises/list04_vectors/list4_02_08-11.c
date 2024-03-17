#include <stdio.h>
#define l 3
#define c 3
int main()
{
    int i,j,m[l][c],soma8=0,soma9=0,soma10=0,soma11=0;
    
    for(i=0;i<l;++i){
    	printf("Insira tres numeros para linha %d: ",i+1);
    	for(j=0;j<c;++j){
    		scanf("%d",&m[i][j]);
    		if(j>i){
    			soma8+=m[i][j];
			}
			else if(j<i){
				soma9+=m[i][j];
			}
			else if(j==i){
				soma10+=m[i][j];
			}
			if(j==c-i-1){
				soma11+=m[i][j];
			}
			
		}
	}
	/*for(i=0;i<3;++i){
    	for(j=0;j<3;++j){
    		printf("%d ",m[i][j]);
		}
		printf("\n");
	}*/
	printf("Soma acima da diagonal p = %d",soma8);
	printf("\nSoma abaixo da diagonal p = %d",soma9);
	printf("\nSoma da diagonal p = %d",soma10);
	printf("\nSoma da diagonal s = %d\n",soma11);
	printf("Matriz tranposta:\n");
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			printf("%d ",m[j][i]);
		}
		printf("\n");
	}

    return 0;
}

