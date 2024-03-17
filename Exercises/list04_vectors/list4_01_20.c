#include <stdio.h>
#include <math.h>

int main(){
    int v1[10],v2[10],i,cont=0,aux;
    for(i = 0; i < 10; i++){
       printf("Informe um num entre 0 e 50: ");
       scanf("%d",&v1[i]);
    }
    printf("V1\n");
    for(i = 0; i < 10; i++){
        printf("%d ",v1[i]);
        if(i%2!=0){
            printf("\n");
        }
    }
    printf("\nVImpar\n");
    for(i = 0; i < 10; i++){
        aux=1;
        if(v1[i]%2!=0){
            v2[i]=v1[i];
            printf("%d ",v2[i]);
            cont++;
        }
        if(v1[i]%2==0){
            aux=0;
        }
        if(aux==1){
            if(cont%2==0){
                printf("\n"); 
            }
        }
    }
    
    return 0;
}

