#include <stdio.h>
struct Vetor{
	float x,y,z;
};
void soma (struct Vetor* v1, struct Vetor* v2, struct Vetor* res);

int main()
{
    struct Vetor v1,v2,res;
    soma(&v1,&v2,&res);

    return 0;
}
void soma (struct Vetor* v1, struct Vetor* v2, struct Vetor* res){
	printf("Insira x de v1: ");
		scanf("%f",&v1->x);
	printf("Agora y de v1: ");;
		scanf("%f",&v1->y);
	printf("Por ultimo z de v1: ");
		scanf("%f",&v1->z);
	
	printf("\nInsira x de v2: ");
		scanf("%f",&v2->x);
	printf("Agora y de v2: ");;
		scanf("%f",&v2->y);
	printf("Por ultimo z de v2: ");
		scanf("%f",&v2->z);
		
	res->x = v1->x + v2->x;
	res->y = v1->y + v2->y;
	res->z = v1->z + v2->z;
	
	printf("\n---Soma---\n");
	printf("x = %.2f\n",res->x);
	printf("y = %.2f\n",res->y);
	printf("z = %.2f\n",res->z);
}
