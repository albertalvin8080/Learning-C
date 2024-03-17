#include <stdio.h>

int main()
{
    int i,v[10],aux=1,n=0,j=1;
    float media,soma=0,desvio;
    for(i=0;i<10;i++){
        v[i]=aux;
        aux++;
        n++;
    }
    for(i=0;i<10;i++){
        soma+=v[i];
    }
    media = (float) soma/n;
    
    for(i=0;i<10;i++){
        desvio = (float) v[i] - media;
        if(desvio<0){
            desvio*=-1;
        }
        printf("Desvio %d = %.2f\n",j,desvio);
        j++;
    }
    printf("Media = %.2f",media);
    
    return 0;
}


