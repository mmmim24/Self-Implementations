// str_del(string,index,length)
// this takes a string as a argument and deletes specific length from index given
#include<bits/stdc++.h>
using namespace std;
void str_del(char *s1,int id, int len)
{
    int l = 0;
    for(int k = 0;s1[k]!='\0';k++)
    {
        l++;
    }
    char *temp = (char*)malloc(l*sizeof(char));
    for(int k = 0;s1[k]!='\0';k++)
    {
        temp[k] = s1[k];
    }
    temp[l] = '\0';
    for(int i = 0;i < id-1;i++)
    {
        s1[i] = temp[i];
    }
    int k,j = id-1;
    for(k = id+len-1;temp[j]!='\0';k++)
    {
        s1[j++] = temp[k];
    }
    s1[k] = '\0';
}
int main()
{
    int id,len;
    char s1[1000];
    scanf("%s %d %d",s1,&id,&len);
    str_del(s1,id,len);
    printf("%s\n",s1);
    return 0;
}