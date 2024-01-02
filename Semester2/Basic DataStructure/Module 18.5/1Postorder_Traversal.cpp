vector<int> v;
void post_order(TreeNode *root)
{
    if (root == NULL)
        return;
    // base case
    post_order(root->left);
    post_order(root->right);
    v.push_back(root->data);
}
vector<int> postorderTraversal(TreeNode *root)
{
    post_order(root);
    return v;
}