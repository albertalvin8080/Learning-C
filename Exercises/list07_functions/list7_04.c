#include <stdio.h>

int qp(int x);

int main()
{
    int n;
    printf("Insira um num: ");
    scanf("%d",&n);
    
    int check = qp(n);
    if(check==1){
    	printf("%d eh um quadrado perfeito",n);
	}
	else{
		printf("%d NAO eh um quadrado perfeito",n);
	}

    return 0;
}
int qp(int x){
	int check=0,i;
	
	for(i=1;i<x;i++){
		if(i*i==x){
			check=1;
			break;
		}
	}
	return check;
}
