#include <stdio.h>

int fatorial(int numero);

int main()
{
    int num,*p=&num;
    
    printf("Insira um numero: ");
    scanf("%d",&num);
    
    *p = fatorial(*p);
    printf("O fatorial do numero digitado eh = %d",*p);

    return 0;
}

int fatorial(int numero){
	int fat=1;
	for(int i=1;i<=numero;i++){
		fat *= i;
	}
	return fat;
}
