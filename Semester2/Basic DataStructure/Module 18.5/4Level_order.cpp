vector<int> v;

vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    v.clear();
    queue<BinaryTreeNode<int> *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        BinaryTreeNode<int> *p = q.front();
        q.pop();
        v.push_back(p->val);
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return v;
}