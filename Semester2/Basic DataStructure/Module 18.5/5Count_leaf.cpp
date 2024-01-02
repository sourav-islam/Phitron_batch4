int count_leafs(BinaryTreeNode<int> *root)
{
    if (root == NULL)
        return 0;
    else if (root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    else
    {
        int l = count_leafs(root->left);
        int r = count_leafs(root->right);
        return l + r;
    }
}
int noOfLeafNodes(BinaryTreeNode<int> *root)
{
    // Write your code here.
    return count_leafs(root);
}