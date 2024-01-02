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
int count_leafs(Node *root)
{
    if (root == NULL)
        return 0;
    else if (root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    else
    {
        int l = count_leafs(root->left);
        int r = count_leafs(root->right);
        return l + r;
    }
}
int main()
{

    // take input using level order
    Node *root = input_B_tree();

    cout << count_leafs(root);
    return 0;
}