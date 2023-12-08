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

void print_recursion(Node *n)
{

    if (n == NULL)
    {
        return;
    }
    cout << n->val << " ";
    print_recursion(n->next);
}
void print_recursively(Node *n)
{
    if (n == NULL)
    {
        return;
    }
    print_recursively(n->next);
    cout << n->val << " ";
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
    cout << "print normally:" << endl;
    print_recursion(head);
    cout << endl
         << "Print Recursively " << endl;
    print_recursively(head);
    return 0;
}