#include <stdio.h>
#include <string.h>

struct valor{
	int a,*aP;
	float b,*bP;
	char c,*cP;
}info;

int main()
{	
	char j='j';
	info.aP=&info.a;
	info.bP=&info.b;
	info.cP=&info.c;
	info.a=1;
	info.b=1.25;
	info.c=65;
    printf("%d, %.2f, %c\n",info.a,info.b,info.c);
    
    *info.aP+=5;
    *info.bP+=4.34;
    *info.cP='j'; //NAO EH UMA STRING
    printf("%d, %.2f, %c\n",info.a,info.b,info.c);
    
    
    return 0;
}

