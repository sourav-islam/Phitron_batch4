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

Node *input_tree()
{
    int x;
    cin >> x;
    queue<Node *> q;
    Node *root;
    if (x == -1)
        root = NULL;
    else
        root = new Node(x);
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *pr = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *left_Node, *right_Node;
        if (l == -1)
            left_Node = NULL;
        else
            left_Node = new Node(l);
        if (r == -1)
            right_Node = NULL;
        else
            right_Node = new Node(r);

        // connections
        pr->left = left_Node;
        pr->right = right_Node;

        if (pr->left)
            q.push(pr->left);
        if (pr->right)
            q.push(pr->right);
    }
    return root;
}
void insert_in_BST(Node *&root, int x)
{
    if (root == NULL)
        root = new Node(x);
    if (x < root->val)
    {
        if (root->left == NULL)
        {
            root->left = new Node(x);
        }
        else
            insert_in_BST(root->left, x);
    }
    else
    {
        if (root->right == NULL)
        {
            root->right = new Node(x);
        }
        else
            insert_in_BST(root->right, x);
    }
}
void level_print(Node *root)
{
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *pr = q.front();
        q.pop();

        cout << pr->val << " ";

        if (pr->left)
            q.push(pr->left);
        if (pr->right)
            q.push(pr->right);
    }
}
int main()
{
    Node *root = input_tree();
    int x;
    cin >> x;
    insert_in_BST(root, x);
    insert_in_BST(root, 7);
    insert_in_BST(root, 4);
    insert_in_BST(root, 22);
    level_print(root);
    return 0;
}