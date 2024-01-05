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
vector<int> v1, v2;
void print_outer_left(Node *root)
{
    if (root == NULL)
        return;

    if (root->left)
        print_outer_left(root->left);
    else
        print_outer_left(root->right);
    v1.push_back(root->val);
}
void print_outer_right(Node *root)
{
    if (root == NULL)
        return;
    v1.push_back(root->val);

    if (root->right)
        print_outer_right(root->right);
    else
        print_outer_right(root->left);
}
int main()
{
    Node *root = input_levelO();

    if (root->left && root->right)
    {
        print_outer_left(root);
        print_outer_right(root->right);
    }
    else if (root->right)
        print_outer_right(root);
    else
        print_outer_left(root);
    for (int i : v1)
    {
        cout << i << " ";
    }
    return 0;
}