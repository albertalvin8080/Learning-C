
#include <stdio.h>

int main()
{
    int i,v[5],v1[5],v2[5];
    for(i=0;i<5;i++){
        printf("insira um num: ");
        scanf("%d",&v[i]);
    }
    for(i=0;i<5;i++){
        if(v[i]%2==0){
            v2[i]=v[i];
            v1[i]=0;
        }
        else{
            v1[i]=v[i];
            v2[i]=0;
        }
    }
    printf("v1: ");
    for(i=0;i<5;i++){
        if(v1[i]!=0)
        printf("%d ",v1[i]);
    }
    printf("\n");
    printf("v2: ");
    for(i=0;i<5;i++){
        if(v2[i]!=0)
        printf("%d ",v2[i]);
    }
    
    
    return 0;
}


