#ifndef _T_valid_Sudoku_HPP_
#define _T_valid_Sudoku_HPP_

#include <vector>
#include <map>

using namespace std;

//! Для загрузки на лит код поменять название класса на Solution
class TValidSudoku
{
   public:

      bool isValidSudoku( vector<vector<char>>& board )
      {
         // для блоков 
         int stolb = -3;
         int line = -3;

         map<char, int> book;
         int bookSize = 0;

         for ( int columno = 0; columno < 9; columno += 3 )
         {
            stolb += 3;
            line = 0;

            for ( int rowo = 0; rowo < 9; rowo += 3 )
            {

               for ( int row = rowo; row < line + 3; ++row )
               {
                  for ( int column = columno; column < stolb + 3; ++column )
                     book[board[row][column]] += 1;
               }

               for ( int bookcheck = 0; bookcheck <= 9; ++bookcheck )
               {
                  if ( book[bookcheck + 48] > 1 )
                     return false;
               }

               book.clear();

               line += 3;
            }
         }

         for ( int STR = 0; STR < 9; ++STR )
         {
            for ( int STB = 0; STB < 9; ++STB )
            {
               book[board[STR][STB]] += 1;
            }

            for ( int bookcheck = 0; bookcheck <= 9; ++bookcheck )
            {
               if ( book[bookcheck + 48] > 1 )
                  return false;
            }

            book.clear();
         }

         for ( int STR = 0; STR < 9; ++STR )
         {
            for ( int STB = 0; STB < 9; ++STB )
            {
               book[board[STB][STR]] += 1;
            }

            for ( int bookcheck = 0; bookcheck <= 9; ++bookcheck )
            {
               if ( book[bookcheck + 48] > 1 )
                  return false;
            }

            book.clear();
         }

         return true;
      }
};

#endif // !_T_valid_Sudoku_HPP_
