/// cumulative sum code for
/// calculating sum of a subarray in O(n) and
#include<stdio.h>
#define size 100
int arr[size],cumsum[size];
int main()
{
	int n,i,q,x,y;
	//input
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	//cumulative sum
	cumsum[0]=arr[0];
	for (i=1;i<n;i++){
		cumsum[i]=cumsum[i-1]+arr[i];
	}
	//query
	scanf("%d",&q);
	for (i=0;i<q;i++)
	{
		scanf("%d %d",&x,&y);
		printf("%d\n",cumsum[y]-cumsum[x-1]);
	}
	
	return 0;
}
