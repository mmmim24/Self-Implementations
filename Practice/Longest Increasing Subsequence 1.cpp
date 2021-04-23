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
        temp = INT_MIN;//a varialble initialized with minimum integer value
        for(int j = 0;j < i;j++){
            if(v[i]>v[j]){// checking if the pointer element is less than the pivot
                if(v[j]>temp){// checking if the pointer element is greater than its previous element,initially temp = INT_MIN
                    temp = v[j];
                    dp[i] = dp[j]+1;
                    ans = max(ans,dp[i]);
                }
                else temp = v[j];// else the previous element of the pointer of next iteration is assigned
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
// this code doesn't always work
// because temp variable is set to INT_MIN
// so if there is any element in the array which is equal to temp
// that doesn't count in the process :")
// so see the 2nd code