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
#define in freopen("input.txt","r+",stdin)
#define out freopen("output.txt","w+",stdout)
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
int parent[1001];
void make_set(int v) {
    parent[v] = v;
}

int find_set(int v) {
    if (v == parent[v])
        return v;
    return find_set(parent[v]);
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b)
        parent[b] = a;
}
void solve(){
    
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
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}