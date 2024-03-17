#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void inversao(float *vet,float *vetInverso,int *in,int *in2){
    if(*in == 99){
        vetInverso[*in2] = vet[*in];
    }else{
        vetInverso[*in2] = vet[*in];
        *in += 1;
        *in2 -= 1;
        inversao(vet,vetInverso,in,in2);
    }
}

int main()
{
    srand(time(NULL));
    
    int in=0,in2=99;
    float vet[100],vetInverso[100];
   
    for(int i=0;i<100;i++){
        vet[i] = (rand()%500)+100;
    }
   
    vet[5] = 5.77;
    inversao(vet,vetInverso,&in,&in2);
   
    for(int i = 0 ; i < 100 ; i++){
        printf("%.2f ",vet[i]);
    }
    printf("\n\n");
    for(int i = 0 ; i < 100 ; i++){
        printf("%.2f ",vetInverso[i]);
    }
   
    return 0;
}
