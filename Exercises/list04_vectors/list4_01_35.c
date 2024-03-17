#include <stdio.h>

int main()
{
    int i,j,a,b;
    
    printf("Insira um num(a): ");
    scanf("%d",&a);
    printf("Insira um num(b): ");
    scanf("%d",&b);
    
    int na[5],nb[5],soma[6],aux,con=1;
    
    for(i=0,aux=1;i<5;i++){
        na[i]=(a/aux)%10;
        aux*=10;
    }
    for(i=0,aux=1;i<5;i++){
    	nb[i]=(b/aux)%10;
    	aux*=10;
    }
    for(i=0;i<5;i++){
    	soma[i]=na[i]+nb[i];
    	if(soma[i]>=10){
    		soma[i+1]=soma[i]/10;
    		soma[i]=soma[i]%10;
		}
	}
	
	//tem que imprimir o vetor soma invertido
    for(i=5;i>=0;i--){
        printf("%d ",soma[i]);
    }
    
    
    return 0;
}


