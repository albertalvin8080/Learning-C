
#include <stdio.h>

int main()
{
    int i,a[5],b[5],c[10],j;
    for(i=0;i<5;i++){
        printf("Insira um num(a): ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
        printf("Insira um num(b): ");
        scanf("%d",&b[i]);
    }
    
    //estah na posicao par a partir do 0 do vetor. para mudar eh so inverter os ifs
    for(i=0,j=0;i<10;i++){
        if(i%2==0){
            c[i]=a[j];
            j++;
        }
    }
    for(i=0,j=0;i<10;i++){
        if(i%2!=0){
            c[i]=b[j];
            j++;
        }
    }
    
    for(i=0;i<10;i++){
        printf("%d ",c[i]);
    }
    
    
    return 0;
}

