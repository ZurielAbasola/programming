#include <algorithm>

using namespace std;

// TODO: Review solution.

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
 
class Solution {
public:
  int maxDepth(TreeNode* root) {
    return root == NULL ? 0 : max(maxDepth(root->left), maxDepth(root->right)) + 1;
  }
};
