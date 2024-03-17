#include <stdio.h>
#include <math.h>

struct polar{
	float r,a; //"a" eh em radianos
};
struct cartes{
	float x,y;
};

int main()
{
	int i;
	struct polar receber;
    struct cartes opera;
    
    printf("Insira o raio: ");
    scanf("%f",&receber.r);
    printf("Agora insira os radianos(a): ");
    scanf("%f",&receber.a);
    
    opera.x = receber.r * cos(receber.a);
    opera.y = receber.r * sin(receber.a);
    
    printf("\nAs coordenadas no plano cartesiano ficam:\n P(%f,%f)",opera.x,opera.y);

    return 0;
}
