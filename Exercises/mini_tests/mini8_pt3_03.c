#include <stdio.h>

int main()
{
    float vf[10];
    
    printf("Enderecos das posicoes:\n");
    for(int i=0;i<10;i++){
    	printf("vf[%d] = %d\n",i,&vf[i]);
	}

    return 0;
}

