#include<stdio.h>
int main()
{
    int n,i;

    scanf("%d",&n);

    for(i=1;i<=n;i++){
            for(n=1;;n++){
                n=n*i;
            }
        printf("\n\t\t%d",n);
    }
    return 0;
}
