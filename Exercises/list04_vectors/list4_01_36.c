#include <stdio.h>

int main()
{
	int i,j;
	float v[10],manter;

	for(i=0;i<10;i++){
	printf("Insira um num: ");
	scanf("%f",&v[i]);
	}
	
	for(i=0;i<10;i++){
		for(j=i+1;j<10;j++){
			if(v[i]>v[j]){
				manter=v[i];
				v[i]=v[j];
				v[j]=manter;
			}
		}
	}
	for(i=0;i<10;i++){
		printf("%.2f ",v[i]);
	}
	char c;
	getc(c);
	
	return 0;
}

