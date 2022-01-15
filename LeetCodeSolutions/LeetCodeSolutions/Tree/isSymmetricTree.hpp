#ifndef _T_Is_Symmetric_Tree_HPP_
#define _T_Is_Symmetric_Tree_HPP_

#include "Tree.hpp"

class TIsSymmetricTree
{
   
   bool isSymmetric( TreeNode* left, TreeNode* right )
   {
      if ( left == nullptr && right == nullptr )
         return true;

      if ( left == nullptr || right == nullptr )
         return false;

      if ( left->val == right->val
           && isSymmetric( left->left, right->right )
           && isSymmetric( left->right, right->left ) )
         return true;
      return 0;

   };

   public:

   bool isSymmetric( TreeNode* root )
   {
      return isSymmetric( root->left, root->right );
   };
};

#endif // _T_Is_Symmetric_Tree_HPP_
