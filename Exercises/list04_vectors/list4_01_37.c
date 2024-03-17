#include <stdio.h>

int main()
{
    int i,j;
    float manter,v[11];
    
    for(i=0;i<11;i++){
    	printf("Insira um num: ");
    	scanf("%f",&v[i]);
	}

	for(i=0;i<11;i++){
		if(i<6){
			for(j=i+1;j<6;j++){
				if(v[i]>v[j]){
					manter=v[i];
					v[i]=v[j];
					v[j]=manter;
				}
			}
		}
		else{
			for(j=i+1;j<11;j++){
				if(v[i]<v[j]){
					manter=v[i];
					v[i]=v[j];
					v[j]=manter;
				}
			}
		}
	}
	for(i=0;i<11;i++){
		printf("%.1f ",v[i]);
	}
	
    return 0;
}

