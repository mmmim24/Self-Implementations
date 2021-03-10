/// code for (n!)%m
#include<stdio.h>
int factmod(int n,int m);
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    printf("%d\n",factmod(n,m));
    return 0;
}
int factmod(int n,int m)
{
    int i,fact=1;
    for(int i=1;i<=n;i++){
        fact=((fact%m)*(i%m)%m);
    }
    return fact;
}
