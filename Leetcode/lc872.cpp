#include <algorithm>
#include <unordered_map>

using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

// TODO: Find solution

class Solution {
public:
  bool leafSimilar(TreeNode* root1, TreeNode* root2) {
    unordered_map<int, int> val_map;

    
  }
};
