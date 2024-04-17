class Solution
{
public:
    int sum_root(TreeNode *root, int curr)
    {
        if (root == nullptr)
        {
            return 0;
        }

        curr = curr * 10 + root->val;

        if (root->left == NULL && root->right == NULL)
        {
            return curr;
        }

        int left_node = sum_root(root->left, curr);
        int right_node = sum_root(root->right, curr);

        return left_node + right_node;
    }

    int sumNumbers(TreeNode *root)
    {

        return sum_root(root, 0);
    }
};