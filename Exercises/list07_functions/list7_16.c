#include <stdio.h>
void linha(int x);

int main()
{
    int n;
    printf("Insira um num: ");
    scanf("%d",&n);
    
    linha(n);

    return 0;
}
void linha(int x){
	for(int i=0;i<x;i++){
		printf("=");
	}
}
