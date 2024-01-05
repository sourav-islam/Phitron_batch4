// 1

bool isNodePresent(BinaryTreeNode<int> *root, int x)
{
    // Write your code here
    if (root == NULL)
        return false;
    if (root->data == x)
        return true;

    bool l = isNodePresent(root->left, x);
    bool r = isNodePresent(root->right, x);
    return (l || r); // if(l == true || r == true) return true; else return false;
}
// 3

bool isNodePresent(BinaryTreeNode<int> *root, int x)
{
    // Write your code here
    if (root == NULL)
        return false;
    if (root->data == x)
        return true;

    bool l = isNodePresent(root->left, x);
    bool r = isNodePresent(root->right, x);
    return l + r;
}
// 2
bool isNodePresent(BinaryTreeNode<int> *root, int x)
{
    // Write your code here
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    bool flag = false;
    while (!q.empty())
    {
        BinaryTreeNode<int> *p = q.front();
        q.pop();

        if (p->data == x)
        {
            flag = true;
            break;
        }

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return flag;
}

// 3
