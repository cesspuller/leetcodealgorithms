#ifndef _T_move_Zeroes_HPP_
#define _T_move_Zeroes_HPP_

#include <vector>

using namespace std;

//! Для загрузки на лит код поменять название класса на Solution
class TMoveZeroes
{
   public:

      void moveZeroes( vector<int>& nums )
      {
         int k = nums.size();
         auto a = nums.begin();

         while ( a != nums.end() )
         {
            if ( *a == 0 )
            {
               nums.erase( a );
               a = nums.begin();
               continue;
            }

            a++;
         }

         nums.resize( k );
      }
};

#endif // !_T_move_Zeroes_HPP_

