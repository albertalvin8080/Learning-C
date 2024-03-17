#include <stdio.h>

struct carros{
	char marca[15];
	int ano;
	float preco;
} info[5];

int main()
{
    int i;
    float p=1;
    
    for(i=0;i<5;i++){
    	printf("Insira a marca do carro n%d: ",i+1);
    	scanf("%15[^\n]%*c",info[i].marca);
    	printf("Agora o ano: ");
    	scanf("%d",&info[i].ano);
    	printf("Por ultimo o preco: ");
    	scanf("%f%*c",&info[i].preco);
	}
	
	while(p!=0){
		printf("\nInsira um valor [p] (0 pra terminar): ");
		scanf("%f",&p);
		for(i=0;i<5;i++){
			if(p>info[i].preco){
				printf("\n*Carro %d*\n",i+1);
				printf("- Marca: %s\n",info[i].marca);
				printf("- Ano: %d\n",info[i].ano);
				printf("- Valor: %.2f\n",info[i].preco);
			}
		}
	}

    return 0;
}
