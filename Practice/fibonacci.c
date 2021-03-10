#include<stdio.h>
int main()
{
    int a3,a1=2,a2=1,i,n;

    scanf("%d",&n);

    for(i=1;i<=n;i++){

    a3=a1+a2;

    a1=a2;

    a2=a3;}

    printf("%d",a1);


    return 0;
}
