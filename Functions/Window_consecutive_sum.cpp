/// this uses sliding window technic
/// for counting maximum sum for a sub array
/// from a given array in O(n) complexity
#include<bits/stdc++.h>
using namespace std;
const int n = 9;
int a[n] = {1, 4, 2, 10, 23, 3, 1, 0, 20};//n-k
void solve(int k)
{
    int max_sum=INT_MIN,window_sum=0;
    for(int i=0;i<n;i++){
        if(i<k)
            window_sum+=a[i];
        else{
            window_sum-=a[i-k];
            window_sum+=a[i];
        }
        max_sum=max(max_sum,window_sum);
    }
    printf("%d\n",max_sum);
}
int main()
{
    //freopen("input.txt","r+",stdin);
    int t,k;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&k);
        solve(k);
    }
    return 0;
}
