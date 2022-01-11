#ifndef _T_remove_Duplicates_HPP_
#define _T_remove_Duplicates_HPP_

#include <vector>

using namespace std;

//! Для загрузки на лит код поменять название класса на Solution
class TRemoveDuplicates                
{
   public:

      int removeDuplicates( vector<int>& nums )
      {
         if ( nums.size() == 0 )
            return 0;
         
         int repeat = 0;
         int counterNum = 0;
         auto cPtr1 = nums.begin();
         auto cPtr2 = cPtr1;

         ++cPtr2;
         auto endnums = nums.end();
         --endnums;

         while ( cPtr1 != endnums )
         {
            ++repeat;

            while ( *cPtr1 == *cPtr2 )
            {
               ++cPtr2;

               if ( cPtr2 == nums.end() )
                  break;
            };

            nums[counterNum] = *cPtr1;
            ++counterNum;


            cPtr1 = cPtr2;
            if ( cPtr2 == nums.end() )
               return repeat;
            ++cPtr2;
         };

         nums[counterNum] = *cPtr1;
         ++repeat;

         return repeat;
      };
};

#endif // _T_remove_Duplicates_HPP_

