/// this program takes two strings as parameters
/// and compares secind one as a part of the first one
/// if the pattern matches, it returns the matching index
/// of the first string, else returns -1
#include<stdio.h>
#include<string.h>
int strmat(char str1[], char str2[])
{
    int i,j,l1=strlen(str1),l2=strlen(str2),len=0;
    for(i=0;i<l1;){
        if(str1[i]==str2[0]){
            for(j=0;j<l2;){
                if(str2[j]==str1[i+j]){
                    len++;//orerereoreo oreo
                    j++;
                    if(len==l2){
                        return (i+1);
                    }
                }
                else{
                    i++;
                    len=0;
                    j=0;
                    if(i>l1)
                        break;
                }
            }
        }
        else i++;
    }
    return -1;
}
int main()
{
	int i,j;
    char str1[100],str2[100];
    scanf("%s %s",str1,str2);
    printf("%d",strmat(str1,str2));
    return 0;
}
