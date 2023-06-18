class Solution {
public:
    int func(TreeNode* root,int& maxi)
    {
        if(root==NULL)
        {
            return 0;
        }
        int lh=func(root->left,maxi);
        int rh=func(root->right,maxi);
        maxi=max(maxi,lh+rh);
        return 1+max(lh,rh);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi=INT_MIN;
        func(root,maxi);
        return maxi;
    }
};
