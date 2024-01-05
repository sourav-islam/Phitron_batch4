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

int level(Node *root)
{
    if (root == NULL)
        return 0;

    int l = level(root->left);
    int r = level(root->right);
    return max(l, r) + 1;
}
void level_nodes(Node *root, int x)
{
    queue<pair<Node *, int>> q;
    q.push(make_pair(root, 0));
    while (!q.empty())
    {
        pair<Node *, int> p = q.front();
        q.pop();
        Node *n = p.first;
        int level = p.second;
        if (level == x)
        {
            cout << n->val << " ";
        }
        if (n->left)
            q.push({n->left, level + 1});
        if (n->right)
            q.push({n->right, level + 1});
    }
}
int main()
{
    Node *root = input_levelO();
    int x;
    cin >> x;
    int l = level(root) - 1;
    if (x > l)
        cout << "Invalid";
    else
    {
        level_nodes(root, x);
    }

    return 0;
}