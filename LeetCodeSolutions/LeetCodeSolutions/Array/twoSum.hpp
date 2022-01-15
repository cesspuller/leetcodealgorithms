#ifndef _T_two_Sum_HPP_
#define _T_two_Sum_HPP_

#include <vector>

using namespace std;

//! Для загрузки на лит код поменять название класса на Solution
class TTwoSum
{
   public:

      vector<int> twoSum( vector<int>& nums, int target )
      {
         int crsr0 = 0;
         int crsr1 = nums.size() - 1;
         vector<int> ans = { crsr0, crsr1 };

         for ( crsr1, crsr0; crsr1 > 0;)
         {
            if ( nums.size() == 2 )
            {
               vector<int> ans = { crsr0, crsr1 };

               return ans;
            }

            if ( crsr1 == crsr0 + 1 )
            {
               crsr1 = nums.size() - 1;
               ++crsr0;
            }

            if ( nums[crsr0] + nums[crsr1] != target )
            {
               --crsr1;
            }

            if ( nums[crsr0] + nums[crsr1] == target )
            {
               vector<int> ans = { crsr0, crsr1 };

               return ans;
            }
         }

         return ans;
      }
};

#endif // !_T_two_Sum_HPP_

