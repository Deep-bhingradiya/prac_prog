/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root) {
    
    int depth_left = 0, depth_right = 0, depth = 0;
    
    if(root == NULL)
    {return 0;}
    
    if((root->left == NULL) && (root->right == NULL))
    {
        return 1;
    }
    
    if(root->left != NULL)
    {
        depth_left = maxDepth(root->left);
    }
    
    if(root->right != NULL)
    {
        depth_right = maxDepth(root->right);
    }
    
    if(depth_right >= depth_left)
    {
        depth = depth_right + 1;    
    }
    else
    {
        depth = depth_left + 1;    
    }
    
    
    return depth;
    
}
