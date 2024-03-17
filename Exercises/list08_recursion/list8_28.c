#include <stdio.h>

int ackerman(int m,int n){
    if(m == 0){
        return n+1;
    }else if(m > 0 && n == 0){
        return ackerman(m-1,1);
    }else if(m > 0 && n > 0){
        return ackerman(m-1,ackerman(m,n-1));
    }
}

int main()
{
    int n,m;
    printf("Insira M e N: ");
    scanf("%d%d",&m,&n);
    
    int retorno = ackerman(m,n);
    printf("Ackerman(%d,%d) = %d",m,n,retorno);
    
    return 0;
}


