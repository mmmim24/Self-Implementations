#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if (board[i][j] != '.')
                {
                    char c = board[i][j];
                    for (int k = 0; k < 9; k++)
                    {
                        if (k != j && board[i][k] == c)
                            return false;
                        if (k != i && board[k][j] == c)
                            return false;
                        int row = (i / 3) * 3 + k / 3;
                        int col = (j / 3) * 3 + k % 3;
                        if (row != i && col != j && board[row][col] == c)
                            return false;
                    }
                }
            }
        }
        return true;
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    vector<vector<char>> a(9, vector<char>(9));
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
            cin >> a[i][j];
    Solution s;
    cout << s.isValidSudoku(a) << endl;
}