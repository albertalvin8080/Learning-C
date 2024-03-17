
#include <stdio.h>

int main()
{
    int i=1,n,j=0,k,c=0;
    printf("Insira um numero inteiro nao negativo: ");
    scanf("%d",&n);

    while(c<n){
           
        for(k=1;k<=i;k++){
            if(i%k==0)
                j++;
        }
        if(j<=2){
            printf("%d ",i);
            c++;
        }
        i++;
        j=0;
    }
    
    
    return 0;
}

