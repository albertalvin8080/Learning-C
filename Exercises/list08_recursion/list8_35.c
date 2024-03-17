#include <stdio.h>
#include <stdlib.h>

void limparBuffer(void);
void procuraDigito(char *str,char k,int in,int *quant);

int main()
{
    int in=0,quant=0;
    char k;
    char str[100];
    
    printf("Insira um numero qualquer: ");
    fgets(str,100,stdin);
    //limparBuffer();
    
    printf("Agora insira um numero de 0 a 9: ");
        scanf("%c",&k);
    
    procuraDigito(str,k,in,&quant);
    printf("O digito %c apareceu %d vez(es).",k,quant);

    return 0;
}

void procuraDigito(char *str,char k,int in,int *quant){
    if(str[in] != '\n'){
        if(str[in] == k){
            *quant += 1;
        }
        in += 1;
        procuraDigito(str,k,in,quant);
    }
}

void limparBuffer(void){
    char c;
    while((c=getchar()) != '\n' && c != EOF);
}

