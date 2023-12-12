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
void search(Node *head, int x)
{
    Node *tmp = head;
    long long flag = -1;
    for (long long i = 0; tmp != NULL; i++)
    {
        if (tmp->val == x)
        {
            flag = i;
            break;
        }
        tmp = tmp->next;
    }
    cout << flag << endl;
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        Node *head = NULL;
        Node *tail = NULL;
        long long val;
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
        long long x;
        cin >> x;
        search(head, x);
    }

    return 0;
}