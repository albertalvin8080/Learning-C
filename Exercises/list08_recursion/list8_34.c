#include <stdio.h>

void inverter(int n,int *vet,int *in){
    if(n/10 == 0){
        vet[*in] = n;
        if(*in>0 && vet[*in]<0){
            vet[*in]*=-1;
        }
    }else{
        vet[*in] = n % 10;
        if(*in>0 && vet[*in]<0){
            vet[*in]*=-1;
        }
        n /= 10;
        *in += 1;
        inverter(n,vet,in);
    }
}

int main()
{
    int n;
    printf("Insira um numero inteiro: ");
    scanf("%d",&n);
    
    int vet[50],in=0;
    inverter(n,vet,&in);
    
    printf("Inverso: ");
    for(int i=0;i<=in;i++){
        printf("%d",vet[i]);
    }

    return 0;
}


