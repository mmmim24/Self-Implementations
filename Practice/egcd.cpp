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
int gcd(int a, int b, int& x, int& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int d = gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}
void solve(){
    int a,b,x,y,c = INT_MAX;
    bool flag = true;
    cin>>a>>b;
    if(a<b) swap(a,b);
    c= gcd(a,b,x,y);
    cout<<c<<wsp<<x<<wsp<<y<<ndl;
}
///|||||||||||||||||||||||||||||||||||///
///-----"For every problem,there------///
///------is a solution which is-------///
///-----simple, fast, and wrong."-----///
///|||||||||||||||||||||||||||||||||||///
int main()
{
    bruh;
    // in;
    // out;
    int t = 1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}