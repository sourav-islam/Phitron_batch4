#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
int main()
{
    list<int> list1;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        list1.push_back(val);
    }
    list1.sort();
    list1.unique();
    for (int v : list1)
        cout << v << " ";
    return 0;
}