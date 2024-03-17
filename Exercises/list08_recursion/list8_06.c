#include <stdio.h>

int Multip_Rec(int n1,int n2);

int main()
{
	int n1,n2;
    printf("Insira n1 e depois n2: ");
    scanf("%d%d",&n1,&n2);

	printf("%d * %d = %d",n1,n2,Multip_Rec(n1,n2));

    return 0;
}

int Multip_Rec(int n1,int n2){
	if(n1==0 || n2==0){
		return 0;
	}else{
		return n2 + Multip_Rec(n1-1,n2);
	}
}
