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
void print_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
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
void sort_list(Node *&head)
{
    Node *tmp = head;
    for (Node *i = tmp; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val > j->val)
                swap(i->val, j->val);
        }
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    cout << endl
         << "Enter values:" << endl;
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
    sort_list(head);
    cout << endl;
    print_list(head);
    return 0;
}