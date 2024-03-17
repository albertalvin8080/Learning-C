#include <math.h>
#include <stdio.h>

int main()
{
    int a,b,i,j,cont=0,k,maior,menor;
    printf("Digite dois numeros diferentes: ");
    scanf("%d%d",&a,&b);
    if(a>b){
        maior=a;
        menor=b;
    }
    if(a<b){
        maior=b;
        menor=a;
    }
    if(menor%2==0)
    menor+=1;
    
    for(i=menor;i<=maior;i+=2){
        int primo = 1;
        int raiz = (int) sqrt(i);
        for(k=3;k<=raiz;k+=2){
            if(i%k==0){
                primo = 0;
                break;
            }
        }
        if(primo>0){
            cont++;
            printf("%d ",i);
        }
    }
    printf("\nContador = %d",cont);
    return 0;
}

