/// big integer mod taking input as a string
#include<bits/stdc++.h>
using namespace std;
char a[101];
int bigIntMod(char a[],int m);///n%m
int main(){
    int n,m,p;
    scanf("%s%d",&a,&m);
    printf("%d\n",bigIntMod(a,m));
    return 0;
}
int bigIntMod(char a[],int m)
{
    int i,l,ans=0;
    l=strlen(a);
    for(i=0;i<l;i++){
        int x=a[i]-48;
        ans=(ans*10+x)%m;
    }
    return ans;
}
/*
3 10000000 13
3 100000000 29
3 1000000 29
3 10000 13
(3^10000000)%29||13

*/
