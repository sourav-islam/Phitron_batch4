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
            break;
            // cout << i->val << " " << j->val << endl;
        }
        i = i->next;
        j = j->prev;
    }
    if (i->val != j->val)
    {
        flag = 0;
    }

    if (flag)
        cout << "YES";
    else
        cout << "NO";
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
    newNode->prev = tail;
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
    // print(head);
    palindrome(head, tail);

    return 0;
}