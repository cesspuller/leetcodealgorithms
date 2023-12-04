#include <iostream>
#include <vector>
#include <iostream>
#include <cstring>
#include <memory>
#include <Windows.h>



#pragma warning(disable : 4996)

//using namespace std;
//
//using IntPtrType = int*;
//
//bool firstalpha( string s, string t )
//{
//   if ( static_cast< int >( s[0] ) < static_cast< int >( t[0] ) )
//   {
//      return true;
//   }
//
//   return false;
//};
//
//struct node;
//using node_ptr = node*;
//constexpr int MAX_WORD_LENGTH = 50;
//char input[MAX_WORD_LENGTH];
//char secondInput[MAX_WORD_LENGTH];
//
//struct node
//{
//   node( const char* word_a )
//   {
//      strcpy( word, word_a );
//   }
//
//   node() = default;
//
//   node( const node& t ) = default;
//
//   char word[MAX_WORD_LENGTH]{};
//   node_ptr ptr_to_next_node = nullptr;
//};
//
//void print_list( node_ptr a_list )
//{
//   while ( a_list )
//   {
//      cout << a_list->word << " ";
//      a_list = a_list->ptr_to_next_node;
//   }
//}
//
//void delete_node( node_ptr& a_list, char a_word[] )
//{
//   string a1( a_list->ptr_to_next_node->word );
//   string a2( a_word );
//
//   static int start = 0;
//
//   if ( start == 0 )
//   {
//      string a3( a_list->word );
//
//      if( a3 == a2 )
//      {
//         auto ptr1 = a_list->ptr_to_next_node;
//
//         delete a_list;
//
//         a_list = ptr1;
//         return;
//      }
//      ++start;
//   }
//
//   if ( a1 == a2 )
//   {
//      auto ptr = a_list->ptr_to_next_node->ptr_to_next_node;
//      delete a_list->ptr_to_next_node;
//      a_list->ptr_to_next_node = ptr;
//
//      return;
//   }
//   else
//   {
//      delete_node( a_list->ptr_to_next_node, a_word );
//   }
//}
//
//void add_after( node_ptr& list, char a_word[], char word_after[] )
//{
//
//   string a1( list->word );
//   string a2( a_word );
//
//   if ( a1 == a2  )
//   {
//      auto last_ptr = list->ptr_to_next_node;
//
//      auto newNode = new node();
//
//      newNode->ptr_to_next_node = last_ptr;
//
//      strcpy( newNode->word, word_after );
//
//      list->ptr_to_next_node = newNode;
//      return;
//   }
//   else
//   {
//      if ( list->ptr_to_next_node == nullptr )
//      {
//         return;
//      }
//      else
//      {
//         add_after( list->ptr_to_next_node, a_word, word_after );
//      }
//   };
//};
//
//void list_selection_sort( node_ptr& a_list )
//{
//
//   node_ptr x1 = a_list;
//   node_ptr x = a_list->ptr_to_next_node;
//   node_ptr x2 = a_list->ptr_to_next_node;
//
//   node_ptr mid = a_list;
//
//   node_ptr less = new node();
//   node_ptr greater = new node();
//
//   while ( x2 != nullptr )
//   {
//      if ( x2->word[0] > mid->word[0] )
//      {
//         greater->ptr_to_next_node;
//      }
//   }
//
//   while ( x1 != nullptr )
//   {
//      while ( x2 != nullptr )
//      {
//         if ( x1->word[0] > x2->word[0] )
//         {
//            swap( x1->word, x2->word );
//         }
//
//         x2 = x2->ptr_to_next_node;
//      }
//
//      if ( x->ptr_to_next_node != nullptr )
//      {
//         x = x->ptr_to_next_node;
//         x2 = x;
//      }
//
//      x1 = x1->ptr_to_next_node;
//   }
//};

//void list_selection_sort( node_ptr& a_list )
//{
//
//   node_ptr x1 = a_list;
//   node_ptr x = a_list->ptr_to_next_node;
//   node_ptr x2 = a_list->ptr_to_next_node;
//
//   while ( x1 != nullptr )
//   {
//      while ( x2 != nullptr )
//      {
//         if ( x1->word[0] > x2->word[0] )
//         {
//            swap( x1->word, x2->word );
//         }
//
//         x2 = x2->ptr_to_next_node;
//      }
//
//      if ( x->ptr_to_next_node != nullptr )
//      {
//         x = x->ptr_to_next_node;
//         x2 = x;
//      }
//      
//      x1 = x1->ptr_to_next_node;
//   }
//};

//void list_selection_sort( node_ptr& a_list )
//{
//   static vector<node_ptr> list_all;
//
//   list_all.push_back( a_list );
//
//   if ( a_list->ptr_to_next_node )
//   {
//      list_selection_sort( a_list->ptr_to_next_node );
//   }
//   else
//   {
//      int size_vec = list_all.size();
//
//      for( int counter1 = 0; counter1 < size_vec - 1; ++counter1 )
//      {
//         for ( int counter2 = counter1 +1; counter2 < size_vec; ++counter2 )
//         {
//            if ( list_all[counter1]->word[0] > list_all[counter2]->word[0] )
//            {
//               swap( list_all[counter1]->word, list_all[counter2]->word );
//            }
//         }
//      }
//   }
//};


//void addToEnd( node_ptr& list, char* word )
//{
//   if( list->ptr_to_next_node == nullptr )
//   {
//      list->ptr_to_next_node = new node(word);
//
//      return;
//   }
//   else
//   {
//      addToEnd( list->ptr_to_next_node, word );
//   }
//}
//
//void invokeList( node_ptr& list )
//{
//   cout << "Ââåäèòå ñëåäóþùåå ñëîâî (èëè '.' äëÿ çàâåðøåíèÿ ñïèñêà):" << endl;
//   cin >> input;
//
//   if ( input[0] == '.' )
//   {
//      cout << endl;
//      return;
//   }
//   else
//   {
//      addToEnd( list, input );
//      invokeList( list );
//   }
//}
//
//int main()
//{
//   SetConsoleCP( 1251 );
//   SetConsoleOutputCP( 1251 );
//
//   cout << "Ââåäèòå ïåðâîå ñëîâî( èëè '.' äëÿ çàâåðøåíèÿ ñïèêà ):" << endl;
//   cin >> input;
//   node_ptr fuck = new node(input);
//
//   invokeList( fuck );
//
//   cout << "ÒÅÊÓÙÅÅ ÑÎÄÅÐÆÈÌÎÅ ÑÏÈÑÊÀ:" << endl;
//
//   print_list( fuck );
//
//   cout << "ÏÎÑËÅ ÊÀÊÎÃÎ ÑËÎÂÀ ÂÛ ÕÎÒÈÒÅ ÂÑÒÀÂÈÒÜ ÍÎÂÎÅ ÑËÎÂÎ?" << endl;
//   cin >> input;
//   cout << "ÊÀÊÎÅ ÑËÎÂÎ ÂÛ ÕÎÒÈÒÅ ÂÑÒÀÂÈÒÜ?" << endl;
//   cin >> secondInput;
//
//   add_after( fuck, input, secondInput );
//
//   cout << "ÒÅÊÓÙÅÅ ÑÎÄÅÐÆÈÌÎÅ ÑÏÈÑÊÀ:" << endl;
//
//   print_list( fuck );
//
//
//   cout << "ÊÀÊÎÅ ÑËÎÂÎ ÂÛ ÕÎÒÈÒÅ ÓÄÀËÈÒÜ?" << endl;
//   cin >> input;
//
//   delete_node( fuck, input );
//
//   cout << "ÒÅÊÓÙÅÅ ÑÎÄÅÐÆÈÌÎÅ ÑÏÈÑÊÀ:" << endl;
//
//   print_list( fuck );
//
//
//   list_selection_sort( fuck );
//   cout << "ÑÎÄÅÐÆÈÌÎÅ ÑÏÈÑÊÀ ÏÎÑËÅ ÑÎÐÒÈÐÎÂÊÈ: " << endl;
//
//   print_list( fuck );
//
//
//   char* gk = new char[5];
//   char** gg = new char*[5];
//
//   gg[1] = new char[5];
//
//   return 0;
//}

#pragma once
#include <cmath>
#include <string>
using namespace std;

struct ListNode
{
   int val;
   ListNode* next;
   ListNode() : val( 0 ), next( nullptr )
   {
   }
   ListNode( int x ) : val( x ), next( nullptr )
   {
   }
   ListNode( int x, ListNode* next ) : val( x ), next( next )
   {
   }
   ListNode( std::initializer_list<int> f )
   {
      
   };
   
};

class Solution
{
   std::vector<std::vector<int>> v1{ {} };
   public:
   ListNode* addTwoNumbers( ListNode* l1, ListNode* l2 )
   {
      ListNode res;
      ListNode* lastRes = &res;

      int carry = 0;

      while ( l1 != nullptr || l2 != nullptr || carry != 0 )
      {
         int sum = carry;

         if ( l1 != nullptr )
         {
            sum += l1->val;
            l1 = l1->next;
         }

         if ( l2 != nullptr )
         {
            sum += l2->val;
            l2 = l2->next;
         }

         lastRes->next = new ListNode( sum % 10 );
         lastRes = lastRes->next;
         carry = sum / 10;
      }

      return res.next;
   }
};

//int main()
//{
//   ListNode* f1 = new ListNode( 1, new ListNode( 9, new ListNode( 9, new ListNode( 9,  new ListNode( 9, new ListNode( 9, new ListNode( 9, new ListNode( 9, new ListNode( 9, new ListNode( 9 ) ) ) )))))));
//   ListNode* f2 = new ListNode( 9 );
//
//   Solution a;
//
//   a.addTwoNumbers( f1, f2 );
//
//   
//
//   return 0;
//}