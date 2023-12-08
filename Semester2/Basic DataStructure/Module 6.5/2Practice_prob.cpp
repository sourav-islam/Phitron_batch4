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
void insert_list(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void duplicate(Node *head)
{
    Node *tmp = head;
    int flag = 0;
    for (Node *i = tmp; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val == j->val)
            {
                flag = 1;
                break;
            }
        }
        }
    if (flag)
        cout << "YES";
    else
        cout << "NO";
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    cout << endl
         << "Enter values: " << endl;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        else
            insert_list(head, tail, val);
    }
    duplicate(head);
    return 0;
}