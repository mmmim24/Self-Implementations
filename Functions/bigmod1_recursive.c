/// big int mod as 
/// (n^m)%p
#include<stdio.h>
int bigmod1(int n,int m,int p);
int main(){
    //freopen("input.txt","r+",stdin);
    int n,m,p;
    scanf("%d%d%d",&n,&m,&p);
    printf("%d\n",bigmod1(n,m,p));
    return 0;
}
int bigmod1(int n,int m,int p)
{
    if(p==0) return -1;
    if(m==0) return 1;
    if(n==0) return 0;
    if(m%2==1) return (n%p*bigmod1(n,m-1,p)%p)%p;
    else return (bigmod1(n,m/2,p)%p*bigmod1(n,m/2,p)%p)%p;
}
/*
3 3 4
3 10000000 13
3 100000000 29
3 1000000 29
3 10000 13
*/
