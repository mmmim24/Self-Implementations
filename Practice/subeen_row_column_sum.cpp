/// takes a 4*4 grid of numbers
/// and formulates sum of rows and columns
#include<bits/stdc++.h>
using namespace std;
int grid[5][5],sum[2][5];
int main()
{
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&grid[i][j]);
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            sum[0][i]+=grid[i][j];
            sum[1][i]+=grid[j][i];
        }
    }
    int q,r;
    printf("Enter 0 to get the sum of row\nrow no\n");
    while(~scanf("%d%d",&q,&r)){
        if(q) printf("Sum of column %d: %d\n",r,sum[1][r-1]);
        else printf("Sum of row %d: %d\n",r,sum[0][r-1]);
    }
    return 0;
}
/*
6 4 7 8 9
3 7 1 9 9
8 6 4 2 7
2 4 2 5 9
4 1 6 7 3
0 1
0 2
0 3
0 4
0 5
1 1
1 2
1 3
1 4
1 5
*/
