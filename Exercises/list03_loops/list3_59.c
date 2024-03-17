
#include <stdio.h>

int main()
{
    float valor,mediaH,res,com,in,somaRes,somaCom,somaIn,maior=0,menor=99999;
    int i,h,categoria;
    
    printf("Informe o numero de habitantes: ");
    scanf("%f",&h);
    printf("Informe o valor do kwh: ");
    scanf("%f",&valor);
    
    for(i=1;i<=h;i++){
        printf("Informe a categoria do habitante %d:\n\t1-Residencial\n\t2-Comercial\n\t3-Industrial\n\t)",i);;
        scanf("%d",&categoria);
        switch(categoria){
            case 1:
            printf("Insira o consumo do mes (kwh): ");
            scanf("%f",&res);
            if(res>maior)
            maior=res;
            if(res<menor)
            menor=res;
            break;
            
            case 2:
            printf("Insira o consumo do mes (kwh): ");
            scanf("%f",&com);
            if(com>maior)
            maior=com;
            if(com<menor)
            menor=com;
            break;
            
            case 3:
            printf("Insira o consumo do mes (kwh): ");
            scanf("%f",&in);
            if(in>maior)
            maior=in;
            if(in<menor)
            menor=in;
            break;
        }
        somaRes+=res;
        somaCom+=com;
        somaIn+=in;
    }
    mediaH = (float) ((somaIn+somaCom+somaRes)*valor)/h;
    printf("Media = RS%.2f",mediaH);
    printf("")
    
    
    return 0;
}
