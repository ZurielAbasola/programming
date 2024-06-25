
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

// TODO: Review solution to problem 
 
class Solution {
public:
  TreeNode* deleteNode(TreeNode* root, int key) {
    if (root == nullptr) 
        return root;

    if (key > root->val)
        root->right = deleteNode(root->right, key);
    else if (key < root->val) 
        root->left = deleteNode(root->left, key);
    else {
      if (root->left == nullptr)
          return root->right;
      else if (root->right == nullptr)
          return root->left;
      

      TreeNode* curr = root->right;
      while (curr->left != nullptr) {
        curr = curr->left;
      }
      root->val = curr->val;
      root->right = deleteNode(root->right, root->val);
    }
    
    return root;
  }
};
