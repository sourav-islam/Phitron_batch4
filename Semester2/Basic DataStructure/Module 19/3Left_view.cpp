// 1
vector<int> getLeftView(TreeNode<int> *root)
{
    //    Write your code here

    vector<int> v;
    bool freq[3006] = {false};
    queue<pair<TreeNode<int> *, int>> q;
    if (root)
        q.push({root, 1});

    while (!q.empty())
    {
        pair<TreeNode<int> *, int> pr = q.front();
        q.pop();
        TreeNode<int> *node = pr.first;
        int level = pr.second;

        if (freq[level] == false)
        {
            v.push_back(node->data);
            freq[level] = true;
        }

        if (node->left)
            q.push({node->left, level + 1});
        if (node->right)
            q.push({node->right, level + 1});
    }
    return v;
}

// 2
vector<int> getLeftView(TreeNode<int> *root)
{
    //    Write your code here

    vector<int> v;
    queue<TreeNode<int> *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {

        int level = q.size();

        for (int i = 0; i < level; i++)
        {
            TreeNode<int> *pr = q.front();
            q.pop();
            if (i == 0)
            {
                v.push_back(pr->data);
            }

            if (pr->left)
                q.push(pr->left);
            if (pr->right)
                q.push(pr->right);
        }
    }
    return v;
}