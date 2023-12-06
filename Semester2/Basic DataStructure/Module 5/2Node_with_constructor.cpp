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
int main()
{ // create node with constructor
    Node a(10);
    Node b(20);
    // linked a to b
    a.next = &b; // a.next point to the same location in memory where b is stored.
    // b.next=NULL;  dite hobe na. karon already constructor dia node create er somoy deya hoice.

    cout << a.val << endl;
    cout << b.val << endl;
    cout << (*a.next).val << endl;
    cout << a.next->val << endl;
    return 0;
}