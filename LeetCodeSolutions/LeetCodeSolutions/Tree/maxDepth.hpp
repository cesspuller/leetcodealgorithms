#ifndef _T_MAX_DEPTH_HPP_
#define _T_MAX_DEPTH_HPP_

#include "Tree.hpp"
#include <iostream>

using namespace std;

class TMaxDepth
{
   public:

      int maxDepth( TreeNode* root )
      {
         if ( root == nullptr ) return 0;

         int depthRight = maxDepth( root->left ) + 1;

         cout << depthRight;

         int depthLeft = maxDepth( root->right ) + 1;

         cout << depthLeft;

         return max( depthRight, depthLeft );
      };
};
#endif // _T_MAX_DEPTH_HPP_