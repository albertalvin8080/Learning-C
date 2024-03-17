#include <stdio.h>

int main()
{
    int i,j=0,v1[5],v2[5],vU[10],vI[5],aux=1;
    int soma=0,prod=1,dif=0;
    /* ESSE CODIGO NAO SEGUE EFETIVAMENTE A QUESTAO POIS CONSIDERA A
    POSSIBILIDADE DO USUARIO DIGITAR NUMEROS REPETIDOS*/

    for(i=0;i<5;i++){
        printf("insira um num(v1): ");
        scanf("%d",&v1[i]);
    }
    for(i=0;i<5;i++){
        printf("insira um num(v2): ");
        scanf("%d",&v2[i]);
    }
    //uniao
    for(i=0;i<10;i++){
        if(i<5){
            vU[i]=v1[i];
        }
        else{
            vU[i]=v2[j];
            j++;
        }
    }
    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(vU[i]==vU[j])
            vU[i]=0;
        }
    }
    printf("\nvU = ");
    for(i=0;i<10;i++){
        if(vU[i]!=0){
            printf("%d ",vU[i]);
        }
    }
    //interseccao
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(v1[i]==v2[j]){
                vI[i]=v1[i];
                break;
            }
            else{
                vI[i]=0;
            }
        }
    }
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if(vI[i]==vI[j])
            vI[i]=0;
        }
    }
    printf("\nvI = ");
    for(i=0;i<5;i++){
        if(vI[i]!=0){
            printf("%d ",vI[i]);
        }
    }
    //soma
    printf("\nSoma = ");
    for(i=0;i<5;i++){
        soma=0;
        soma+=v1[i]+v2[i];
        printf("%d ",soma);
    }
    //produto
    printf("\nProduto = ");
    for(i=0;i<5;i++){
        prod=1;
        prod*=v1[i]*v2[i];
        printf("%d ",prod);
    }
    //diferenca
    printf("\nDiferenca = ");
    for(i=0;i<5;i++){
        dif=0;
        dif+=v1[i]-v2[i];
        printf("%d ",dif);
    }
    
    return 0;
}

