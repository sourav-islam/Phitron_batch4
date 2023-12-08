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

void input_list(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    tail->next = newNode;
    tail = newNode;
}
void find_difference(Node *head, Node *tail)
{
    Node *tmp = head;
    if (tmp == tail)
    {
        cout << "0";
        return;
    }
    int mx = tmp->val;
    int mn = tmp->val;
    while (tmp->next != NULL)
    {
        if (tmp->next->val > mx)
        {
            mx = tmp->next->val;
        }
        if (tmp->next->val < mn)
        {
            mn = tmp->next->val;
        }
        tmp = tmp->next;
    }
    cout << mx - mn;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;

    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        else
        {
            input_list(head, tail, val);
        }
    }
    find_difference(head, tail);

    return 0;
}