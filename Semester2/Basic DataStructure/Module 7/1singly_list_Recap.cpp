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
    /*   // create simple node
      Node a, b;
      a.val = 10;
      b.val = 20;
      // linked them
      a.next = &b;

      cout << a.val << " " << a.next->val << endl;
      cout << (*a.next).val << endl;
      */

    // Create Dynamic node
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    // Linked them
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    // print them
    print_linked_list(head);
    return 0;
}