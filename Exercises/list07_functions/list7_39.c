#include <stdio.h>
void Troca(int *pa,int *pb);

int main()
{
	int a,b;
    printf("Insira o valor de 'A' e 'B': ");
    scanf("%d%d",&a,&b);
    
    Troca(&a,&b);
    printf("A = %d\nB = %d",a,b);

    return 0;
}
void Troca(int *pa,int *pb){
	int temp = *pa;
	*pa=*pb;
	*pb=temp;
}
