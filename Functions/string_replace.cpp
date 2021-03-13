///function str_rplc(text,position,string)
/// replaces string 
#include<bits/stdc++.h>
using namespace std;
void str_rplc(char *s1,int id, char *s2)
{
    int j = 0;
    for(int i = id-1;s2[j]!='\0';i++)
    {
        s1[i] = s2[j++];
    }
}
int main()
{
    char s1[1000],s2[1000];
    int pos;
    scanf("%s %d %s",s1,&pos,s2);
    str_rplc(s1,pos,s2);
    printf("%s\n",s1);
    return 0;
}
