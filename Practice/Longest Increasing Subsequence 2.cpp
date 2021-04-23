#include <bits/stdc++.h>
using namespace std;
int dp[1000];
int LIS(vector<int> v){
    int l = v.size(),ans,temp;
    //dp array intialized with 1 as LIS value is 1
    for(int i = 0;i < l;i++){
        dp[i] = 1;
    }

    for(int i = 1;i < l;i++){
        ans = 0;
        for(int j = 0;j < i;j++){
            if(v[i]>v[j]){
                temp = v[j];
                dp[i] = max(dp[i],dp[j]+1);// if ith length is already maximum, then it will not update
                ans = max(ans,dp[i]);
            }
        }
    }
    
    for(int i = 0;i < l;i++){
        cout<<dp[i]<<" \n"[i==l-1];
    }
    return ans;
}
int main()
{
    freopen("input.txt","r+",stdin);
    freopen("output.txt","w+",stdout);
    int n;
    cin>>n;
    vector <int> v(n);
    for(int i = 0;i < n;i++){
        cin>>v[i];
    }
    int m = LIS(v);
    cout<<m<<endl;
}
// in this process, we always update the lis length array named "dp"
// where the array is initialized with 1
// so if there is maximum length on some index, the length doesn't update
// thus temp = INT_MIN not needed