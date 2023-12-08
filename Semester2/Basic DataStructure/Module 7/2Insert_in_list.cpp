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
void insert_at_tail(Node *&head, Node *&tail, int val)
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
void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}
int size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}
void insert_node(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    // cout << tmp << endl; // 0 means tmp == NULL
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *tail = d;
    // Linked them
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    int pos, val;
    cout << endl
         << "Enter pos and val: ";
    cin >> pos >> val;
    if (pos > size(head))
    {
        cout << "size of list: " << size(head) << " invalid index: " << pos << endl;
    }
    else if (pos == 0)
    {
        insert_at_head(head, val);
    }
    else if (pos == size(head))
    {
        insert_at_tail(head, tail, val);
    }
    else
    {
        insert_node(head, pos, val);
        // aita dia tail(pos == size(head)) a insert hoi, kintu complexity O(n).but jodi tail k track kore rakte partam, tahole O(1) possible
    }
    print_linked_list(head);

    return 0;
}