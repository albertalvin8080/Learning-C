#include <stdio.h>

int Catalan(int n){
    if(n == 0){
        return 1;
    }else{
        return 2 * (2 * n - 1) * Catalan(n - 1) / (n + 1);
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
    
    int retorno = Catalan(n);
    printf("Numeros de Catalan(%d) = %d",n,retorno);
    
    return 0;
}



