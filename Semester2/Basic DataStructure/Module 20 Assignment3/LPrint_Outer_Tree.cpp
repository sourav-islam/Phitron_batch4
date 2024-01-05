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
Node *input_levelO()
{
    int val;
    cin >> val;
    queue<Node *> q;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *new_left, *new_right;
        if (l == -1)
            new_left = NULL;
        else
            new_left = new Node(l);
        if (r == -1)
            new_right = NULL;
        else
            new_right = new Node(r);

        p->left = new_left;

        p->right = new_right;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
void print_outer_left(Node *root)
{
    vector<int> v1;
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();
        // v1.push_back(p->val);
        cout << p->val << " ";

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
}
void print_outer_right(Node *root)
{
    vector<int> v2;
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();
        // v2.push_back(p->val);
        cout << p->val << " ";
        if (p->right)
            q.push(p->right);
        if (p->left)
            q.push(p->left);
    }
}
int main()
{
    Node *root = input_levelO();

    print_outer_left(root);
    print_outer_right(root->right);
    return 0;
}