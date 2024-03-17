
#include <stdio.h>

int main()
{
    int i,j,c=0,n;
    printf("Digite um numero: ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            c++;
            printf("%d ",c);
        }
        printf("\n");
    }
    
    

    return 0;
}

