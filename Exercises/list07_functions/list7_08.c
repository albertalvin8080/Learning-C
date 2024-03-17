#include <stdio.h>
#include <math.h>
float hip(float x, float y);

int main()
{
    float c1,c2;
    printf("Insira o primeiro cateto: ");
    scanf("%f",&c1);
    printf("Agora o segundo cateto: ");
    scanf("%f",&c2);
    
    float h=hip(c1,c2);
    printf("Hipotenusa = %.2f",h);

    return 0;
}
float hip(float x, float y){
	float h = sqrt(x*x+y*y);
	
	return h;
}
