
#include <stdio.h>

int main()
{
    int i,v[100],aux=1,j[100];
    for(i=0;i<100;i++){
        v[i]=aux;
        aux++;
    }
    for(i=0;i<10;i++){
        if(v[i]%7!=0 || v[i]%10==7){
            j[i]=v[i];
        }
        else{
            j[i]=0;
        }
    }
    for(i=0;i<100;i++){
        printf("%d ",j[i]);
    }
    
    return 0;
}


