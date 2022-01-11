#ifndef _T_contains_Duplicate_HPP_
#define _T_contains_Duplicate_HPP_

#include <vector>
#include <algorithm>

using namespace std;

//! Для загрузки на лит код поменять название класса на Solution
class TContainsDuplicate
{
   public:

   bool containsDuplicate( vector<int>& nums )
   {
      sort( nums.begin(), nums.end() );

      for ( int cursor0 = 0; cursor0 < nums.size(); ++cursor0 )
      {
         for ( int cursor1 = 1; cursor1 < nums.size(); ++cursor1 )
         {
            if ( nums.at( cursor0 ) == nums.at( cursor1 ) )
               return true;

            ++cursor0;
         }
      }

      return false;
   }
};

#endif // _T_contains_Duplicate_HPP_

