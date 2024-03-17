#include <stdio.h>
#include <math.h>
#include <complex.h>

struct complexo{
	float _Complex Z,W;
	float z1,z2,w1,w2;
};

int main()
{
	float _Complex soma,subtr,prod;
	float moduloZ,moduloW;
	struct complexo info;
	
    printf("Insira a parte REAL e depois IMAGINARIA de um numero complexo 'Z': ");
    scanf("%f%f",&info.z1,&info.z2);
    printf("Agora, a parte REAL e depois IMAGINARIA de outro numero complexo 'W': ");
    scanf("%f%f",&info.w1,&info.w2);
    
    info.Z = info.z1 + info.z2*I;
    info.W = info.w1 + info.w2*I;
    //printf("%.f + %.fi\n", creal(info.Z), cimag(info.Z));
    
    soma = info.Z + info.W;
    subtr = info.Z - info.W;
    prod = info.Z * info.W;
    moduloZ = sqrt(info.z1*info.z1 + info.z2*info.z2);
    moduloW = sqrt(info.w1*info.w1 + info.w2*info.w2);
    
    printf("\nSoma:\n %.f + (%.f*i)\n",creal(soma),cimag(soma));
    printf("Subtracao:\n %.f + (%.f*i)\n",creal(subtr),cimag(subtr));
    printf("Produto:\n %.f + (%.f*i)\n",creal(prod),cimag(prod));
    printf("Modulo de Z = %.2f\nModulo de W = %.2f",moduloZ,moduloW);
    

    return 0;
}

