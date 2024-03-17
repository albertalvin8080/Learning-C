#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void palavraFibo(int n,char *str){
    if(n == 0){
        strcat(str,"b");
    }else if(n == 1){
        strcat(str,"a");
    }else{
        palavraFibo(n-1,str);
        palavraFibo(n-2,str);
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
    
    char *str = (char*) calloc(1000,sizeof(char));
    palavraFibo(n,str);
    
    printf("Palavra Fibonacci(%d) = %s",n,str);
    free(str);
    
    return 0;
}




