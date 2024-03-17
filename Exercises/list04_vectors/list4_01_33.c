//https://pt.stackoverflow.com/questions/389098/compactar-array-removendo-zeros-c
//solução alternativa e util
#include <stdio.h>

int main()
{
    int i,j=0,v1[10],aux=0,k=1,lx=0;

    for(i=0;i<10;i++){
        printf("insira um num: ");
        scanf("%d",&v1[i]);
    }
    for(i=0;i<10;i++){
        if(v1[i]==0){
            for(j=0;j<9-i;j++){
                v1[i+aux]=v1[i+k];
                v1[i+k]=-1;
                aux++;
                k++;
            }
            if(v1[i]==0){
                i--;
            }
            aux=0;
            k=1;
            lx++;
        }
    }
    for(i=0;i<10-lx;i++){
        printf("%d ",v1[i]);
    }
    
    return 0;
}




