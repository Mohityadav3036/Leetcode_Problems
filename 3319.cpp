    /**
    * Definition for a binary tree node.
    * struct TreeNode {
    *     int val;
    *     TreeNode *left;
    *     TreeNode *right;
    *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
    *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
    * };
    */
    class Solution {
    public:
    vector<int>ans;
    int solve(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }

        int l = solve(root->left);
        int r = solve(root->right);

        if(l==r)
        {
            int p = 1+2*l;
            ans.push_back(p);
            return p;
        }

        return -1;

    }
        int kthLargestPerfectSubtree(TreeNode* root, int k) {
            solve(root);

            if(ans.size() < k)
            {
                return -1;
            }

            sort(ans.begin(),ans.end());
            return ans[ans.size() - k];

        }
    };