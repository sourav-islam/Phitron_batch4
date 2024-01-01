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
void input_B_tree()
{
    int val;
    cin >> val;
    Node *root;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // 1 line theke 1ta 1ta kore ber kore ana
        Node *f = q.front();
        q.pop();

        // 2 jabotio kaj kore fela
        if (f->left != NULL && f->right != NULL)
        {
        }
    }
}
int main()
{

    // Level_order traversal(print)
    input_B_tree();
    return 0;
}