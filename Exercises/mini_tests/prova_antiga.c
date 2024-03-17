#include <stdio.h>

int main()
{
    int codigo[5],i,j;
    float salario[5],liquido[5],receita[5],tempo[5];
	float dias=20,passagem=3,descontos[5];
    
    for(i=0;i<2;i++){
        printf("Insira o Codigo do funcionario %d: ",i+1);
        scanf("%d",&codigo[i]);
        printf("Agora o tempo de servico (em anos): ");
        scanf("%f",&tempo[i]);
        printf("Por fim, o salario base: ");
        scanf("%f",&salario[i]);
    }
    for(i=0;i<2;i++){
        receita[i]=salario[i]*(tempo[i]*1/100)+(2*passagem)*dias;
        descontos[i]=(salario[i]*11/100)+(salario[i]*6/100);
        liquido[i]=salario[i]+receita[i]-descontos[i];
    }
    for(i=0;i<2;i++){
    	printf("\nCodigo: %d (trabalhador %d)\n",codigo[i],i+1);
    	printf("Receitas: RS%.2f (1%% de acrescimo por tempo de servico + 2 vales onibus diarios)\n",receita[i]);
    	printf("Descontos: RS%.2f (11%% de INSS + 6%% de Vale transporte sobre o salario base)\n",descontos[i]);
    	printf("Valor liquido a receber: RS%.2f (salario + receita - descontos)\n",liquido[i]);
	}

    return 0;
}
