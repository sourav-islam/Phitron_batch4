#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    list<int> list1;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        list1.push_back(val);
    }

    for (int val : list1)
        cout << val << " ";
    cout << endl;

    return 0;
}