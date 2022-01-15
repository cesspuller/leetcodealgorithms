#ifndef _T_rotate_Array_HPP_
#define _T_rotate_Array_HPP_

#include <vector>

using namespace std;

//! Для загрузки на лит код поменять название класса на Solution
class TRotateArray
{
   public:
   void rotate( vector<int>& nums, int k )
   {
      k = k % nums.size();

      vector<int> temp = nums;

      for ( int a = 0; a < nums.size() - k; ++a )
      {
         nums[a + k] = temp[a];
      };

      for ( int a = nums.size() - k, count = 0; a < nums.size(); ++a, ++count )
      {
         nums[count] = temp[a];
      } 
   }
};

#endif // _T_rotate_Array_HPP_

