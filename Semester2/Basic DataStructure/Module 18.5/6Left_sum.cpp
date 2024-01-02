long long leftSum(BinaryTreeNode<int> *root)
{
    // Write your code here.
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    long long cnt = 0;
    while (!q.empty())
    {
        BinaryTreeNode<int> *f = q.front();
        q.pop();

        if (f->left)
        {
            cnt += f->left->data;
            q.push(f->left);
        }
        if (f->right)
            q.push(f->right);
    }
    return cnt;
}