class Solution
{
public:
    vector<int> v;
    void leafs(TreeNode *root)
    {
        if (root == NULL)
            return;
        if (root->left == NULL && root->right == NULL)
        {
            v.push_back(root->val);
            return;
        }

        leafs(root->left);
        leafs(root->right);
    }
    bool leafSimilar(TreeNode *root1, TreeNode *root2)
    {
        leafs(root1);
        vector<int> v1(v);
        v.clear();
        leafs(root2);
        vector<int> v2(v);

        if (v1 == v2)
            return true;
        else
            return false;
    }
};