#ifndef _T_single_Number_HPP_
#define _T_single_Number_HPP_

#include <vector>

using namespace std;

//! Для загрузки на лит код поменять название класса на Solution
class TSingleNumber
{
   public:

      int singleNumber( vector<int>&nums )
      {
         int ans = 0;

         for ( auto res : nums )
            ans = ans ^ res;

         return ans;
      }
};

#endif // _T_single_Number_HPP_

