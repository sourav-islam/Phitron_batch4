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
void detect_cycle(Node *head)
{
    Node *fast = head;
    Node *slow = head;
    bool found = false;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
        {
            found = true;
            break;
        }
    }

    if (found)
        cout << "cycle detected" << endl;
    else
        cout << "No cycle detected";
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    // connection
    head->next = a;
    a->next = b;
    b->next = c;
    // c->next = a; // cycle c to a;

    detect_cycle(head);
    return 0;
}