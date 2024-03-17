#include <stdio.h>
#define pi 3.1415
void calc_esfera(float r, float *area, float *volume);

int main()
{
	float r,a,v;
    printf("Insira o raio: ");
    scanf("%f",&r);
    calc_esfera(r,&a,&v);
    printf("Area = %.2f\nVolume = %.2f",a,v);

    return 0;
}
void calc_esfera(float r, float *area, float *volume){
	*area = 4*pi*r*r;
	*volume = (4.0/3.0)*pi*r*r*r;
}
