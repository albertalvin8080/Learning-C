#include <stdlib.h>
#include <stdio.h>

void binario(int n,int *in,int *vet){
    if(n == 0){
        vet[*in] = n;
    }else{
        vet[*in] = n % 2;
        *in += 1;
        binario(n/2,in,vet);
    }
}

int main()
{
    int n;
    printf("Insira N: ");
    scanf("%d",&n);
    
    if(n<0){
        printf("NAO PODE NUMERO NEGATIVO");
    }
    
    int vet[50],in=0;
    binario(n,&in,vet);
    
    for(int i = in ; i >= 0 ; i--){
        printf("%d",vet[i]);
    }
    
    return 0;
}





