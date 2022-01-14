#ifndef _T_valid_Palindrome_HPP_
#define _T_valid_Palindrome_HPP_

#include <string>
#include <algorithm>

using namespace std;

//! Для загрузки на лит код поменять название класса на Solution
class TValidPalindrome
{
   public:

      bool isPalindrome( string s )
      {
         s.erase( remove_if( s.begin(), s.end(), []( char c )
                                                   {
                                                      return !isalnum( c );
                                                   } ), s.end() );

         std::transform( s.begin(), s.end(), s.begin(), ::tolower );

         string t = s;

         reverse( begin( t ), end( t ) );

         bool ans = equal( begin( s ), end( s ), begin( t ), end( t ) );

         return ans;
      }
};

#endif // !_T_valid_Palindrome_HPP_

