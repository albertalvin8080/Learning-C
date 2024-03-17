#include <stdio.h>
int segundos(int x, int y, int z);

int main()
{
    int h,m,s;
    printf("Digite as horas: ");
    scanf("%d",&h);
	printf("Agora os minutos: ");
    scanf("%d",&m);
    printf("Agora os segundos: ");
    scanf("%d",&s);
    
    int segs = segundos(h,m,s);
    printf("Em segundos = %d",segs);

    return 0;
}
int segundos(int x, int y, int z){
	int segs;
	segs = (x*60)*60 + y*60 + z;
	
	return segs;
}
