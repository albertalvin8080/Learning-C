
#include <stdio.h>

int main()
{
    int i,n=1,soma=0,somaP=0,quant=0,quantP=0,maior=-999999,menor=999999;
    float media,mediaP;
    
    while(n!=0){
        printf("Insira um numero: ");
        scanf("%d",&n);
        if(n!=0){
            quant++;
            soma+=n;
            if(n%2==0){
                somaP+=n;
                quantP++;
            }
            if(n>maior){
                maior=n;
            }
            if(n<menor){
                menor=n;
            }
        }
    }
    media = (float) soma/quant;
    mediaP = (float) somaP/quantP;
    
    printf("Quantidade: %d\nQuant. Pares: %d\nSoma: %d\nSoma dos pares: %d\nMaior: %d\nMenor: %d\n",quant,quantP,soma,somaP,maior,menor);
    printf("Media: %.1f\nMedia dos pares: %.1f",media,mediaP);
    
    return 0;
}

