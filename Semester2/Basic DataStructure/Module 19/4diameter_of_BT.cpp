int maxD = 0;
int maxHeight(TreeNode<int> *root)
{
    if (root == NULL)
        return 0;

    int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    int d = l + r; // every node er diametar
    maxD = max(maxD, d);
    return max(l, r) + 1;
}

int diameterOfBinaryTree(TreeNode<int> *root)
{
    // 1
    /* int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    int d = l+r;  // sudhu root er diameter
    return max(maxD,d); */

    // 2
    maxHeight(root);
    return maxD;
}