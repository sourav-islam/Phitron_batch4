#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    long long val;
    Node *next;
    Node(long long val)
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
        return;
    }
    tail->next = newNode;
    tail = newNode;
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
void sametosame(Node *head, Node *head1)
{
    int flag = 1;
    if (size(head) != size(head1))
    {
        cout << "NO";
    }
    else
    {
        while (head != NULL)
        {
            if (head->val != head1->val)
            {
                flag = 0;
                break;
            }
            head = head->next;
            head1 = head1->next;
        }
        if (flag)
            cout << "YES";
        else
            cout << "NO";
    }
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
    Node *head1 = NULL;
    Node *tail1 = NULL;
    int v;
    while (true)
    {

        cin >> v;
        if (v == -1)
        {
            break;
        }
        else
        {
            input_list(head1, tail1, v);
        }
    }

    sametosame(head, head1);
    return 0;
}