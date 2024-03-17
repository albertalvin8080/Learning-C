#include <stdio.h>
struct vetor{
	float x,y,z;
};

int main()
{
	int i;
	float somax=0,somay=0,somaz=0;
	struct vetor r3[2];
	
    for(i=0;i<2;i++){
    	printf("Insira um valor pra x(%d): ",i+1);
    	scanf("%f",&r3[i].x);
    	printf("Insira um valor pra y(%d): ",i+1);
    	scanf("%f",&r3[i].y);
    	printf("Insira um valor pra z(%d): ",i+1);
    	scanf("%f",&r3[i].z); 	
	}
	for(i=0;i<2;i++){
		somax+=r3[i].x;
		somay+=r3[i].y;
		somaz+=r3[i].z;
	}
	printf("A soma dos vetores eh:\n- SomaX = %.1f\n- SomaY = %.1f\n- SomaZ = %.1f",somax,somay,somaz);

    return 0;
}

