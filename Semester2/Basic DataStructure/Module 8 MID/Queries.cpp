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
void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
}
void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
int size(Node *n)
{
    int count = 0;
    while (n != NULL)
    {
        count++;
        n = n->next;
    }
    return count;
}
void delete_at_vth(Node *&head, int v)
{
    if (head == NULL)
    {
        return;
    }
    else if (v == 0)
    {
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        return;
    }
    else if (v >= size(head))
    {
        return;
    }
    else
    {
        Node *tmp = head;
        for (int i = 1; i <= v - 1; i++)
        {
            tmp = tmp->next;
        }
        if (tmp->next == NULL)
        {
            return;
        }

        Node *deleteNode = tmp->next;
        tmp->next = tmp->next->next;
        delete deleteNode;
    }
}
void print_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
int main()
{
    Node *head = NULL;
    int q;
    cin >> q;
    while (q--)
    {
        long long x, v;
        cin >> x >> v;
        if (x == 0)
        {
            insert_at_head(head, v);
        }
        else if (x == 1)
        {
            insert_at_tail(head, v);
        }
        else
        {
            delete_at_vth(head, v);
        }
        print_list(head);
        cout << endl;
        // cout << x << " " << v << endl;
    }
    return 0;
}