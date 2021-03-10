/// takes two strings
/// prints - Matched if second one is
/// matches with the first one/ a substring
/// prints - Didn't match :( 
/// if second one doesn't become 
/// at least a substring of the first one
#include<bits/stdc++.h>
using namespace std;
int main(){
    char s[100],ss[100];
    cin>>s>>ss;
    int i,j,l=strlen(s),ll=strlen(ss),flag=0;
    for(i=0;i<l;i++){
        for(j=0;j<ll&&i+j<l;j++){
            if(s[i+j]!=ss[j]){
                break;
            }
        }
        if(j==ll){
            flag=1;
            break;
        }
    }
    if(flag) cout<<"Matched\n";
    else cout<<"Didn't match :( \n";
    return 0;
}
