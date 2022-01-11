#ifndef _T_Tree_HPP_
#define _T_Tree_HPP_


// Класс дерева с лито кода 
class TreeNode
{
   public:

      //! Основной конструктор
      TreeNode() : val( 0 ), left( nullptr ), right( nullptr )
      {
      };

      //! Разновидность конструктора 
      TreeNode( int x ) : val( x ), left( nullptr ), right( nullptr )
      {
      };

      //! Разновидность конструктора 
      TreeNode( int x, TreeNode* left, TreeNode* right ) : val( x ), left( left ), right( right )
      {
      };

      int val;         //!< Значение узла 
      TreeNode *left;  //!< Указатель на правое дерево 
      TreeNode *right; //!< Указатель на левое дерево
};

#endif // _T_Tree_HPP_