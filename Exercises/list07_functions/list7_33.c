//OBS: a funcao fatorial desse codigo foi adaptada de uma outra ja existente
#include <stdio.h>
int fatorialS(int n);

int main()
{
	int n;
    printf("Insira um numero: ");
    scanf("%d",&n);
    
    int ret = fatorialS(n);
    printf("\nA soma de seus digitos eh = %d",ret);

    return 0;
}
int fatorialS(int n){
	int soma = 0;
	int j = 2; // last multiple of factorial of any number goes upto 2   
    int a[10000] = {0};// array of 1000 spaces initialized with 0
	//aumente o tamanho do vetor acima para numeros ainda maiores 
    a[0] = 1;  
    int len = 1;// length starts with one  
    int c = 0, num = 0;  
    while(j <= n) // till j is less than value for which factorial is required  
    {  
        c = 0;  
        num = 0;  
        while(c < len)  
        {  
            a[c] = a[c] * j;  
            a[c] = a[c] + num;  
            num = a[c] / 10;  
            a[c] = a[c] % 10;  
            c++;  
        }  
        while(num != 0)  
        {  
            a[len] = num % 10;
			//ou a[len] = num;, porque 'num' nunca tera mais de 2 digitos (teoricamente)					 	
            num = num / 10;  
            len++;  
        }  
        j++;  
    }  
    len--;  
    
    printf("\n\nO fatorial de %d eh = ", n);  
    while(len >= 0)  
    {  
        printf("%d", a[len]);
		soma += a[len]; 
        len--;  
    }
    return soma;
}
