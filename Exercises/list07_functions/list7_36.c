#include <stdio.h>
int superFat(int x);
int fatorial(int y);

int main()
{
	int n;
    printf("Insira um num: ");
    scanf("%d",&n);
    int ret=superFat(n);
    printf("Super Fatorial de %d = %d",n,ret);

    return 0;
}
int superFat(int x){
	int i,sf=1;
	for(i=2;i<=x;i++){
		sf*=fatorial(i);
	}return sf;
}
int fatorial(int y){
	int j,fat=1;
	for(j=2;j<=y;j++){
		fat*=j;
	}return fat;
}
