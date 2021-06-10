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
int mem[1000][1000];
void init(){
    for(int i = 0;i<1000;i++){
        for(int j = 0;j < 1000;j++){
            mem[i][j] = -1;
        }
    }
}
int lcs(int i,int j,string s1,string s2)
{
    if(i==s1.size()||j==s2.size()) return 0;
    if(mem[i][j]!=-1) return mem[i][j];
    int ans = 0;
    if(s1[i]==s2[j]){
        ans = 1 + lcs(i+1,j+1,s1,s2);
    }
    else{
        int r1 = lcs(i,j+1,s1,s2);
        int r2 = lcs(i+1,j,s1,s2);
        ans = max(r1,r2);
    }
    mem[i][j] = ans;
    return ans;
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
        init();
        string s1,s2;
        cin>>s1>>s2;
        cout<<lcs(0,0,s1,s2)<<ndl;
    }
    return 0;
}