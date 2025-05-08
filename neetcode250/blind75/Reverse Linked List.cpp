#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        ListNode *prev = nullptr;
        ListNode *curr = head;
        while (curr)
        {
            ListNode *nextTemp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextTemp;
        }
        return prev;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    ListNode *head = new ListNode(1);
    ListNode *temp = head;
    for (int i = 2; i <= n; i++)
    {
        temp->next = new ListNode(i);
        temp = temp->next;
    }
    Solution sol;
    ListNode *reversedHead = sol.reverseList(head);
    while (reversedHead)
    {
        cout << reversedHead->val << " ";
        reversedHead = reversedHead->next;
    }
    cout << endl;
    return 0;
}