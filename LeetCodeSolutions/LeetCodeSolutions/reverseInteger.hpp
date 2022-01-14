#ifndef _T_reverse_Integer_HPP_
#define _T_reverse_Integer_HPP_

#include <string>

using namespace std;

//! Для загрузки на лит код поменять название класса на Solution
class TReverseInteger
{
   public:

      int reverse( int x )
      {

         if ( x > 0 )
         {
            try
            {
               string convert = to_string( x );

               std::reverse( convert.begin(), convert.end() );

               double ans = stoi( convert );

               return ans;
            }
            catch ( ... )
            {
               return 0;
            }
         }

         if ( x < 0 )
         {
            try
            {
               string convert = to_string( x );

               std::reverse( convert.begin(), convert.end() );

               int ans = stoi( convert );

               return -ans;

            }
            catch ( ... )
            {
               return 0;
            }
         }

         return 0;
      }
};

#endif // !_T_reverse_Integer_HPP_

