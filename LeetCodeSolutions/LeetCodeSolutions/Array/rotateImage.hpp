#ifndef _T_rotate_Image_HPP_
#define _T_rotate_Image_HPP_

#include <vector>

using namespace std;

//! Для загрузки на лит код поменять название класса на Solution
class TRotateImage
{
   public:

      void rotate( vector<vector<int>>& matrix )
      {
         for ( int r = 0; r < matrix.size(); r++ )
         {
            for ( int c = r; c < matrix.size(); c++ )
            {
               swap( matrix[r][c], matrix[c][r] );
            }
         }

         for ( int r = 0; r < matrix.size(); r++ )
         {
            for ( int c = 0; c < matrix.size() / 2; c++ )
            {
               swap( matrix[r][c], matrix[r][matrix.size() - c - 1] );
            }
         }
      }
};

#endif // !_T_rotate_Image_HPP_

