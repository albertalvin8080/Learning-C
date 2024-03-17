
#include <stdio.h>

int main()
{
    int i,v[5],j;
    
    for(i=0;i<5;i++){
        printf("Insira um num: ");
        scanf("%d",&v[i]);
        for(j=i-1;j>=0;j--){
            if(v[i]==v[j]){
                printf("NAO sao permitidos numeros repetidos. ");
                i--;
            }
        }
    }
    for(i=0;i<5;i++){
        printf("%d ",v[i]);
    }
    
    return 0;
}

