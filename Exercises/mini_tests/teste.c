#include <stdio.h>

void func (&i);

int main ()
{
	int j=2;
 	int &i = j;
 	
 	i*=2;
 	
 	printf("%d %d",i,j);
 	//printf ("%p\t%d\t%d\t%d\t%d\n", p , (*p+2), **&p, (3**p), (**&p+4));
 	return 0;
}

