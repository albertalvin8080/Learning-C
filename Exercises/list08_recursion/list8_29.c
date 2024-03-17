#include <stdio.h>

int pell(int n){
    if(n == 0 || n == 1){
        return n;
    }else{
        return 2*pell(n-1) + pell(n-2);
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
    
    int retorno = pell(n);
    printf("Numeros de Pell(%d) = %d",n,retorno);
    
    return 0;
}



