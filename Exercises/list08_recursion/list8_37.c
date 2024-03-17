#include <stdio.h>

void russa(int a,int b,int *soma){
    if(a!=1){
        if(a%2 != 0){
            *soma += b;
        }
        a /= 2;
        b *= 2;
        
        russa(a,b,soma);
    }else{
        *soma += b;
    }
}

int main()
{
    int a,b,soma=0;
    printf("Insira A: ");
    scanf("%d",&a);
    printf("Insira B: ");
    scanf("%d",&b);
    
    russa(a,b,&soma);
    printf("Multiplicacao a Russa(%d*%d) = %d",a,b,soma);
    
    return 0;
}

