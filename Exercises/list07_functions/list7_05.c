#include <stdio.h>
#define pi 3.141592
float vol(float);

int main()
{
	float n;
    printf("Insira o raio de uma esfera: ");
    scanf("%f",&n);
    
    float v=vol(n);
    printf("%f",v);

    return 0;
}
float vol(float r){
	float v;
	v = (4.0/3.0)*pi*r*r*r;
	
	return v;
}
