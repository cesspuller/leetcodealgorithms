#ifndef _T_valid_Anagram_HPP_
#define _T_valid_Anagram_HPP_

#include <string>

using namespace std;

//! Для загрузки на лит код поменять название класса на Solution
class TValidAnagram
{
   public:

      bool isAnagram( string s, string t )
      {
         int alpha0[26] = { 0 };
         int alpha1[26] = { 0 };
         int crsr0 = 0;
         int crsr1 = 0;

         for ( crsr0 = 0; crsr0 < s.length(); ++crsr0 )
         {
            alpha0[s[crsr0] - 'a']++;
         }

         for ( crsr1 = 0; crsr1 < t.length(); ++crsr1 )
         {
            alpha1[t[crsr1] - 'a']++;
         }

         bool comp = equal( begin( alpha0 ), end( alpha0 ), begin( alpha1 ), end( alpha1 ) );

         return comp;
      }
};

#endif // !_T_valid_Anagram_HPP_

