#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,k=0,l,tam=0,aux;
    char a[50],b[100];
    
    printf("Insira uma string: ");
    	scanf("%100[^\n]%*c",b);
    printf("Insira outra string MENOR: ");
    	scanf("%50[^\n]%*c",a);
    
    int t1b = strlen(b);
    int t2a = strlen(a);
    
    for(i=0;i<=t1b-t2a;i++){
    	for(j=0,aux=0;j<t2a;j++,aux++){
    		if(b[i+aux]==a[j]){
    			k++;
			}
			else{
				k=0;
				break;
			}
			if(k==t2a){
				i+=k-1;
			}
		}
		tam+=k;
		k=0;
	}
	int quant = tam/t2a;
	printf("A string 'a' aparece %d vezes na string 'b'\na{%s}\nb{%s}",quant,a,b);
    return 0;
}

