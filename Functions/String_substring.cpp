///function substring(string,initial,length)
#include<bits/stdc++.h>
using namespace std;
char* substring(char *s,int index,int length)
{
    char *r =(char*)malloc(sizeof(int)*(length+1));
    int i = 0,k = 0;
    for (i = index-1,k=0;k<length&&i<index+length-1;i++,k++)
    {
        r[k] = s[i];
    }
    r[k++] = '\0';
    return r;
}
int main()
{
    
    char str[100];
    int len,index;
    scanf("%s %d %d",str,&index,&len);
    printf("%s\n",substring(str,index,len));
    return 0;
}