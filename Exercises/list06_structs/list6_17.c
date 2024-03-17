#include <stdio.h>

struct eletrodomesticos{
	char nome[15];
	float potencia,horas,consumo;
} info[5];

int main()
{
	float dias,consumoT=0;
	int i;
	
    for(i=0;i<5;i++){
    	printf("Insira o nome do eletrodomestico n%d: ",1+i);
    	scanf("%15[^\n]",info[i].nome);
    	printf("Agora insira a potencia(kW): ");
    	scanf("%f",&info[i].potencia);
    	printf("Agora insira as horas de uso por dia: ");
    	scanf("%f%*c",&info[i].horas);
    	//Consumo = (potência em watt/1000) x (tempo em horas) = total em KWh
    	info[i].consumo = info[i].potencia*info[i].horas; //ja estava em kW
    	consumoT+=info[i].consumo;
	}
	
	printf("\nConsumo total = %.2fkWh\n",consumoT);
	for(i=0;i<5;i++){
		printf("\n- Eletrodomestico n%d: %s\n",i+1,info[i].nome);
		printf("- Consumo individual: %.2f%%\n",(info[i].consumo/consumoT)*100);
	}

    return 0;
}

