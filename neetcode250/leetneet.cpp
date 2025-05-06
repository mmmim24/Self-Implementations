#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int getSum(int a, int b)
    {
        int ans = a;
        while (b != 0)
        {
            ans = a ^ b;
            b = ((a & b) << 1);
            a = ans;
        }
        return ans;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int a, b;
    cin >> a >> b;
    Solution s;
    cout << s.getSum(a, b) << endl;
}