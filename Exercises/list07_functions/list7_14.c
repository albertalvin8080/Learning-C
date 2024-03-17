#include <stdio.h>
int consumo(float km, float l);

int main()
{
	float km,l;
	printf("Insira a distancia em KM: ");
	scanf("%f",&km);
    printf("Agora os litros usados: ");
    scanf("%f",&l);
    
    int check=consumo(km,l);
    if(check == 1){
    	printf("VENDA O CARRO");
	}
	else if(check==2){
		printf("Carro economico");
	}
	else if(check==3){
		printf("Carro SUPER economico");
	}

    return 0;
}
int consumo(float km, float l){
	if(km/l<8){
		return 1;
	}
	else if(km/l>=8 && km/l<=14){
		return 2;
	}
	else if(km/l>14){
		return 3;
	}
}

