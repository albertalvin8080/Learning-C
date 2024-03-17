#include <stdio.h>

int main()
{
    int i,j=0,v1[5],v2[5],vU[10],aux=1;
    for(i=0;i<5;i++){
        printf("insira um num(v1): ");
        scanf("%d",&v1[i]);
    }
    for(i=0;i<5;i++){
        printf("insira um num(v2): ");
        scanf("%d",&v2[i]);
    }
    for(i=0;i<10;i++){
        if(i<5){
            vU[i]=v1[i];
        }
        else{
            vU[i]=v2[j];
            j++;
        }
    }
    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(vU[i]==vU[j])
            vU[i]=0;
        }
    }
    printf("\nvU = ");
    for(i=0;i<10;i++){
        if(vU[i]!=0){
            printf("%d ",vU[i]);
        }
    }
    return 0;
}

