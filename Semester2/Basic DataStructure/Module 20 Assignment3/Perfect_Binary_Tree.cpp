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
int count(Node *root)
{
    if (root == NULL)
        return 0;

    int l = count(root->left);
    int r = count(root->right);
    return l + r + 1;
}
int maxdepth(Node *root)
{
    if (root == NULL)
        return 0;

    int l = maxdepth(root->left);
    int r = maxdepth(root->right);
    return max(l, r) + 1;
}
int main()
{
    Node *root = input_levelO();

    if (count(root) == pow(2, maxdepth(root)) - 1)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}