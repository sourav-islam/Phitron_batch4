class Solution
{
public:
    bool isUnivalTree(TreeNode *root)
    {
        /*       vector<int> v;
           if(root == NULL) return false;
           else{
                v.push_back(root->val);

             if(v.size() > 1)
             {
                 if(root->val == v[0]) return true;
                 else return false;
             }

            bool l = isUnivalTree(root->left);
            bool r = isUnivalTree(root->right);
            return l && r;
          }
           }  */

        queue<TreeNode *> q;
        q.push(root);
        bool flag = true;
        while (!q.empty())
        {
            TreeNode *pr = q.front();
            q.pop();
            if (root->val != pr->val)
            {
                flag = false;
                break;
            }
            if (pr->left)
                q.push(pr->left);
            if (pr->right)
                q.push(pr->right);
        }
        return flag;
    }
};