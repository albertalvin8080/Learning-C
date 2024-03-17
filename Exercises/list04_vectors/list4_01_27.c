
#include <stdio.h>

int main()
{
    int i,v[5],j=0,c=3,p[5];
    for(i=0;i<5;i++){
        printf("insira um num: ");
        scanf("%d",&v[i]);
    }
    for(i=0;i<5;i++){
        j=0;
        if(v[i]%2==0 && v[i]!=2){
           j+=2;
        }
        for(c=1;c<=v[i];c+=2){
            if(v[i]%c==0){
                j++;
            }
        }
        if(j<=2){
            p[i]=v[i];
        }
        else if(j>2){
            p[i]=0;
        }
    }
    for(i=0;i<5;i++){
        if(p[i]!=0 && p[i]!=1)
        printf("%d, posicao: %d\n",p[i],i+1);
    }
    
    return 0;
}



