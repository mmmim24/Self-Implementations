/// function str_insrt(text,position,string)
/// insert string to the specific position of the text
#include<bits/stdc++.h>
using namespace std;
void str_insrt(char *txt,int position, char *str)
{
    int k = 0,len=0;
    for(k = 0;txt[k]!=0;k++)
        len++;
    k=0;
    char  *temp = (char*)malloc(len*sizeof(char));
    for(k = 0;txt[k]!=0;k++)
    {
        temp[k] = txt[k];
    }
    int j = 0,i = 0;
    for(i = position-1;str[j]!='\0';i++)
    {
        txt[i] = str[j++];
    }
    // printf("%d\n",i);
    for(k = 0;temp[position+k-1]!='\0';i++)
    {
        txt[i] = temp[position-1+k++];
    }
    txt[i] = '\0';
}
int main()
{
    char txt[100],str[100];
    int position;
    scanf("%s %d %s",txt,&position,str);
    str_insrt(txt,position,str);
    printf("%s\n",txt);
    return 0;
}