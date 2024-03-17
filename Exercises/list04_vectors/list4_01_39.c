#include <stdio.h>
#include <math.h>

int main()
{
    int i,j,aux,a,formula;
    printf("Insira o numero da repeticao: ");
    scanf("%d",&a);
    
    int fatorial(int x); //chamando funcao
    
    for(i=0;i<a;i++){
    	aux=0;
    	for(j=0;j<=i;j++){
    		int n = fatorial(i);
    		int k = fatorial(aux);
    		int sub = i-aux;
  			int subc = fatorial(sub);
  			
  			formula = n/(k*subc);
  			printf("%d ",formula);
  			
  			aux++;
		}
		
		printf("\n");
	}

    return 0;
}

int fatorial(int x)
{
	int fat=1,aux=x;
	if(aux==0){
		return 1;
	}
	else{
		for(fat = 1; aux > 1; aux-=1){      
    	  	fat*=aux;
  		}
  		return fat;
 	}
}

