///|||||||||||||||||||||||||||||||||||///
///---In the name of Almighty Allah---///
///|||||||||||||||||||||||||||||||||||///
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
using vi = vector<int>;
using pii = pair<int,int>;
using vpii = vector<pii>;
using si = set<int>;
using msi = map<string, int>;
#define bruh ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define in freopen("/home/mmmim/Workspace/c/input.txt","r+",stdin)
#define out freopen("/home/mmmim/Workspace/c/output.txt","w+",stdout)
#define pi acos(-1.0)
#define eps 1e-18
#define mod int(1e9+7)
#define F first
#define S second
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define ndl "\n"
#define wsp " "
#define YES "YES\n"
#define NO "NO\n"
ll arr[100005],sum[1000006];
void build(int node,int l,int r){
    if(l==r){
        sum[node] = arr[l];
        return;
    }
    int left = node*2;
    int right = left + 1;
    int mid = l + (r-l)/2;
    build(left,l,mid);
    build(right,mid+1,r);
    sum[node] = sum[left] + sum[right];
}
void update(int node,int l,int r,int pos,int val){
    if(pos<l||pos>r){
        return;
    }
    if(pos==l&&pos==r){
        sum[node] = val;
        return;
    }
    int left = node*2;
    int right = left + 1;
    int mid = l + (r-l)/2;
    update(left,l,mid,pos,val);
    update(right,mid+1,r,pos,val);
    sum[node] = sum[left] + sum[right];
}
ll query(int node,int l,int r,int i,int j){
    int q1,q2;
    if(j<l||i>r)
        return 0;
    if(i<=l&&j>=r)
        return sum[node];
    int left = node*2;
    int right = left + 1;
    int mid = l + (r-l)/2;
    q1 = query(left,l,mid,i,j);
    q2 = query(right,mid+1,r,i,j);
    return q1+q2;
}
void solve()
{
    int n;
    cin>>n;
    for(int i = 1;i <= n;i++)
        cin>>arr[i];
    build(1,1,n);
    cout<<query(1,1,n,1,7)<<ndl;
}
///|||||||||||||||||||||||||||||||||||///
///-----"For every problem,there------///
///------is a solution which is-------///
///-----simple, fast, and wrong."-----///
///|||||||||||||||||||||||||||||||||||///
int main()
{
    bruh;
    in;
    out;
    int t = 1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}