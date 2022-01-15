#ifndef _T_first_Unique_Character_In_A_String_HPP_
#define _T_first_Unique_Character_In_A_String_HPP_

#include <string>
#include <map>
#include <vector>

using namespace std;
//! Для загрузки на лит код поменять название класса на Solution
class TFirstUniqueCharacterInAString
{
   public:

      int firstUniqChar( string s )
      {
         map<char, int> mapa;
         vector<char> uniq;
  
         auto fuck = s.begin();
  
         for ( ; fuck < s.end(); ++fuck )
         {
            mapa[*fuck] += 1;
         }
  
         for ( auto item : mapa )
         {
            if ( item.second == 1 )
               uniq.push_back( item.first );
         }
  
         for ( int a = 0; a < s.size(); ++a )
         {
            for ( int b = 0; b < uniq.size(); ++b )
               if ( s[a] == uniq[b] )
                  return a;
         }
  
         return -1;
      }
};

#endif // !_T_first_Unique_Character_In_A_String_HPP_

