#ifndef _T_plus_One_HPP_
#define _T_plus_One_HPP_

#include <vector>

using namespace std;

//! Для загрузки на лит код поменять название класса на Solution
class TPlusOne
{
   public:

      void recurs( vector<int>& digits, int k )
      {

         if ( ( digits[digits.size() - 1 - k] += 1 ) == 10 )
         {
            if ( k == ( digits.size() - 1 ) )
            {
               digits[digits.size() - 1 - k] = 1;

               digits.resize( digits.size() + 1 );

               return;
            }

            digits[digits.size() - 1 - k] = 0;


            recurs( digits, k + 1 );
         }
         else
            return;
      }

      vector<int> plusOne( vector<int>& digits )
      {
         int k = 0;

         recurs( digits, k );

         return digits;
      };
};

#endif // _T_plus_One_HPP_



