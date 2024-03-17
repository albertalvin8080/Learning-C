#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1;
    printf("Insira um numero com 3 algarismos: ");
    scanf("%d",&n1);
    
    if(n1<=0){
        printf("Numero invalido");
        return 0;
    }
    
    int soma(int x);
    int s = soma(n1);
    
    printf("%d",s);
    
    return 0;
}
int soma(int x){
    int n1,n2,n3,soma;
    
    n3 = (x/100)%10;
    n2 = (x/10)%10;
    n1 = x%10;
    soma = n1+n2+n3;
    
    printf("%d + %d + %d = ",n3,n2,n1);
    
    return n1,n2,n3,soma;
}
