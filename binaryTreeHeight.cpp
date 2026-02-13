class Solution {
    public:
      // Function to find the height of a binary tree.
      int height(Node* node) {
          if(node == NULL){
              return -1;
          }
          
          int leftLen = height(node->left);
          int rightLen = height(node->right);
          
          return (max(leftLen,rightLen)+1);
      }