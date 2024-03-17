#include <stdio.h>

int main()
{
    int i,j,v1[5],v2[5],vI[5],aux=1;
    for(i=0;i<5;i++){
        printf("insira um num(v1): ");
        scanf("%d",&v1[i]);
    }
    for(i=0;i<5;i++){
        printf("insira um num(v2): ");
        scanf("%d",&v2[i]);
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(v1[i]==v2[j]){
                vI[i]=v1[i];
                break;
            }
            else{
                vI[i]=0;
            }
        }
    }
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if(vI[i]==vI[j])
            vI[i]=0;
        }
    }
    printf("\nvI = ");
    for(i=0;i<5;i++){
        if(vI[i]!=0){
            printf("%d ",vI[i]);
        }
    }
    return 0;
}

