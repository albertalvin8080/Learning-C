#include <stdio.h>

int main()
{
    int i = 2,*pi = &i;
    char c = 'G',*pc = &c;
    float f = 4.97,*pf = &f;
    
    printf("Antes:\ni = %d\nc = %c\nf = %.2f\n",i,c,f);
    
	*pi += 6;
	*pc += 1;
	*pf += 8.25;
	
	printf("\nDepois:\ni = %d\nc = %c\nf = %.2f\n",i,c,f);
    return 0;
}

