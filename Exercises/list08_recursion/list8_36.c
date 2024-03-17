#include <stdio.h>

void mdc(int x,int y,int divisor,int *minimo){
    if(x!=1 && y!=1){
        //incrementa o divisor caso necessario
        if(x%divisor != 0 && y%divisor != 0){
            divisor++;
        }
        //checa divisao comum
        if(x%divisor == 0 && y%divisor == 0){
            *minimo *= divisor;
        }
            
        //realiza a divisao
        if(x%divisor == 0){
            x /= divisor;
        }if(y%divisor == 0){
            y /= divisor;
        }
        
        mdc(x,y,divisor,minimo);
    }
}

int main()
{
    int x,y,divisor = 2,minimo = 1;
    printf("Insira X: ");
        scanf("%d",&x);
    printf("Agora Y: ");
        scanf("%d",&y);
    
    mdc(x,y,divisor,&minimo);
    
    printf("mdc(%d,%d) = %d",x,y,minimo);

    return 0;
}
