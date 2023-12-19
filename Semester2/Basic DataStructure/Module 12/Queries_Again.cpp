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
int size(Node *head)
{
    Node *tmp = head;
    int ctn = 0;
    while (tmp != NULL)
    {
        ctn++;
        tmp = tmp->next;
    }
    return ctn;
}
void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}
void insert_at_x_pos(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = tmp;
}
void insert_at_tail(Node *&tail, int x, int v)
{
    Node *newNode = new Node(v);
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
void print(Node *head)
{
    Node *tmp = head;
    cout << "L -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void print_reverse(Node *tail)
{
    Node *tmp = tail;
    cout << "R -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    int x, v;
    while (q--)
    {
        cin >> x >> v;
        if (x > size(head))
        {
            cout << "Invalid" << endl;
            continue;
        }
        else if (x == 0)
        {
            insert_at_head(head, tail, v);
        }
        else if (x == size(head))
        {
            insert_at_tail(tail, x, v);
        }
        else
        {
            insert_at_x_pos(head, x, v);
        }
        print(head);
        print_reverse(tail);
    }
    return 0;
}