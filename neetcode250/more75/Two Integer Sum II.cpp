#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int len = numbers.size();
        map<int, int> m;
        for (int i = 0; i < len; i++)
        {
            m[numbers[i]] = i + 1;
        }
        vector<int> ans;
        for (int i = 0; i < len; i++)
        {
            int x = target - numbers[i];
            if (m.find(x) != m.end())
            {
                int j = m[x];
                if (j != i + 1)
                {
                    ans.push_back(i + 1);
                    ans.push_back(j);
                    break;
                }
            }
        }
        return ans;
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, target;
    cin >> n >> target;
    vector<int> a(n), ans;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    Solution s;
    s.twoSum(a, target);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
}