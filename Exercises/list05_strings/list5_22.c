#include <stdio.h>

int main()
{
    float v,desconto,avista;
    char str[20];
    
    printf("Insira o nome de uma mercadoria: ");
    scanf("%20[^\n]",str);
    printf("Agora o seu valor: ");
    scanf("%f",&v);
    desconto = v*10.0/100.0;
    avista = v - (v*10.0/100.0);
    
    printf("\nNome do produto: %s",str);
    printf("\nValor total = %.2f",v);
    printf("\nValor do desconto = %.2f (10%%)",desconto);
    printf("\nValor a vista = %.2f",avista);

    return 0;
}
