
#include <stdio.h>

int main()
{
    int n,n1=1,n2=2,n3=3,n4=4,n5=5,n6=6;
    for(n=999; n1!=n6 && n2!=n5 && n3!=n4 ;--n){
        n1=(n*n)%10;
        n2=((n*n)/10)%10;
        
    }
    printf("%d",n1);
    
    return 0;
}
