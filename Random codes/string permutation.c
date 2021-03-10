#include <stdio.h>
#include <string.h>
void swap(char *x, char *y)
{
	char temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
void permute(char *str, int l, int r)
{
    int i;
    if (l == r)
        printf("%s\n",str);
    else
    {
        for (i = l; i < r; i++)
        {
            swap((str+i), (str+l));
            permute(str, l+1, r);
            swap((str+i), (str+l));
        }
    }
}
int main()
{
	char str[101];
	scanf("%s",str);
	int n = strlen(str);
	puts("The permutation of string are:");
	permute(str, 0, n);
	//puts("");
	return 0;
}
