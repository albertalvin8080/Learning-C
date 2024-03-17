#include <stdio.h>

int fatQuadruplo(int n, int k);

int main()
{
	int n;
    printf("Insira um numero POSITIVO: ");
    scanf("%d",&n);
    
    if(n<1){
    	printf("EU DISSE POSITIVO.");
    	return 1;
	}
	
	int fatquad = fatQuadruplo(2 * n, n + 1);
	printf("Fatorial Quadruplo (n=%d) = %d",n,fatquad);
	
    return 0;
}

	int fatQuadruplo(int n, int k){
		if(n == k){
			return  k;
		}else{
			return n * fatQuadruplo(n - 1, k);
		}
	}
	
