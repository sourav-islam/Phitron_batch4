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
Node *Convert_BST(int a[], int n, int l, int r)
{
    if (l > r)
        return NULL;
    int mid = (l + r) / 2;
    Node *root = new Node(a[mid]);
    Node *left_root = Convert_BST(a, n, l, mid - 1);
    Node *right_root = Convert_BST(a, n, mid + 1, r);

    root->left = left_root;
    root->right = right_root;
    return root;
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

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);

    Node *root = Convert_BST(a, n, 0, n - 1);
    level_print(root);
    return 0;
}