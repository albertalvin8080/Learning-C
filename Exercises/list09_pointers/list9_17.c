#include <stdlib.h>
#include <stdio.h>
void frac(float num, int* inteiro, float* frac);

int main()
{
	int in;
	float n,fr;
    printf("Insira um valor real: ");
    scanf("%f",&n);
	frac(n,&in,&fr);
	printf("Pt Inteira: %d\n",in);
	printf("Pt Fracionaria: %f",fr);
    return 0;
}
void frac(float num, int* inteiro, float* frac){
	*inteiro=(int)num;
	*frac=num-*inteiro;
}
