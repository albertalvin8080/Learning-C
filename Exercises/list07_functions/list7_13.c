#include <stdio.h>
float operacao(float x, float y, char c);

int main()
{
	char c;
	float n1,n2;
    printf("Insira um num: ");
    scanf("%f",&n1);
    printf("Insira um num: ");
    scanf("%f",&n2);
    printf("Agora o que voce quer:\n\t(+), (-), (/) ou (*)\n\t");
    scanf("%*c%c",&c);
    	
    float resul=operacao(n1,n2,c);
    printf("%.2f %c %.2f = %.2f",n1,c,n2,resul);

    return 0;
}
float operacao(float x, float y, char c){
	float op;
	switch(c){
		case '+':
			op = x + y;
			break;
		case '-':
			op = x - y;
			break;
		case '/':
			op = x / y;
			break;
		case '*':
			op = x * y;
			break;		
	}
	return op;
}
