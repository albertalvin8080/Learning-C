#include <stdio.h>

int main()
{
    int i,j,aux;
    float v[5],manter;
    
    for(i=0;i<5;i++){
    	printf("Insira um num: ");
    	scanf("%f",&v[i]);
    	if(i>0){
    		aux=0;
    		for(j=i-1;j>=0;j--){
    			if(v[i-aux]<v[j]){
    				manter=v[j];
    				v[j]=v[i-aux];
    				v[i-aux]=manter;
    				aux++;
				}
			}
		}
	}
	for(i=0;i<5;i++){
		printf("%.f ",v[i]);
	}
	
    return 0;
}

