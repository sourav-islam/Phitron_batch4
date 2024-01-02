#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *input_B_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        // 1 line theke 1ta 1ta kore ber kore ana
        Node *p = q.front();
        q.pop();

        // 2 jabotio kaj kore fela
        int l, r;
        cin >> l >> r;

        Node *new_left;
        Node *new_right;

        if (l == -1)
            new_left = NULL;
        else
            new_left = new Node(l);

        if (r == -1)
            new_right = NULL;
        else
            new_right = new Node(r);
        // connections
        p->left = new_left;
        p->right = new_right;

        // 3.children add in the queue
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

void level_order_print(Node *root)
{
    if (root == NULL)
    {
        cout << "Tree nai" << endl;
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // 1.line theke 1ta kore ber kora
        Node *p = q.front();
        q.pop();
        // 2.jabotiyo kaj kore fela
        cout << p->val << " ";
        // 3.children gulo line a add kora
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
}
int main()
{

    // take input using level order
    Node *root = input_B_tree();
    // Level_order traversal(print)
    level_order_print(root);

    return 0;
}