#ifndef _T_reverse_String_HPP_
#define _T_reverse_String_HPP_

#include <vector>

using namespace std;
//! Для загрузки на лит код поменять название класса на Solution
class TReverseString
{
   public:

      void reverseString( vector<char>& s )
      {
         reverse( s.begin(), s.end() );
      }
};

#endif // !_T_reverse_String_HPP_

