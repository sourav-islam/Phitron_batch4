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

void print(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void palindrome(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;
    int flag = 1;
    while (i != j && i->next != j)
    {
        if (i->val != j->val)
        {
            flag = 0;
        }
        i = i->next;
        j = j->prev;
    }
    /* if (i->val == j->val)
    {
        flag = 1;
    } */
    if (flag)
        cout << "Yes";
    else
        cout << "No";
}
void insert_list(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
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
            break;
        insert_list(head, tail, val);
    }

    palindrome(head, tail);

    return 0;
}