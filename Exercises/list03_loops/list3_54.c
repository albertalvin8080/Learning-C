
#include <stdio.h>

int main()
{
    int op,n,i,j=0,c;
    printf("Digite um numero: ");
    scanf("%d",&n);
    if(n%2==0){
        j++;
    }    
    for(i=1;i<=n;i+=2){
        if(n%i==0)
            j++;
    }
    for(c=1;c<=n;c++){
        
    }
    
    if(j<=2)
    printf("O numero %d eh primo",n);
    else
    printf("%d NAO eh primo (j=%d)",n,j);
    return 0;
}


