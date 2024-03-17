#include <stdio.h>

int main()
{
    int i,j,k,v[5],aux;
    for(i=0;i<5;i++){
        printf("Insira um num: ");
        scanf("%d",&v[i]);
    }
    for(i=0;i<5;i++){
        for(k=i+1;k<=5;k++){
            if(v[i]==v[k]){
                v[i]=-99999;
            }
        }
        if(v[i]!=-99999){
            printf("%d ",v[i]);
        }
    }
    

    return 0;
}
