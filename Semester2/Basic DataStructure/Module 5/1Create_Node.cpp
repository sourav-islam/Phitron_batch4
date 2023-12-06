#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
};
int main()
{
    // create node with object and assign value
    Node a, b;

    a.val = 10;
    b.val = 20;
    // Linked a to b
    a.next = &b;
    // b.next=NULL;

    cout << a.val << " " << b.val << endl;
    cout << (*a.next).val << endl;
    cout << a.next->val << endl;
    // b node er pointer variable er address
    cout << a.next->next << endl;
    b.next = NULL;
    cout << a.next->next << endl;

    return 0;
}