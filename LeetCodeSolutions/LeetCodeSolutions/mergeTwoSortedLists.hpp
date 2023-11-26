#include <iostream>

struct ListNode
{

    int val;
    ListNode *next;

    ListNode() : val( 0 ), next( nullptr )
    {

    };

    ListNode( int x ) : val( x ), next( nullptr )
    {

    };

    ListNode( int x, ListNode* next ) : val( x ), next( next )
    {

    };
};

#include <vector>
using namespace std;

class Solution
{
   public:

   ListNode* mergeTwoLists( ListNode* list1, ListNode* list2 )
   {
      if( list1 == nullptr && list2 != nullptr)
      {
         return list2;
      }
      if ( list2 == nullptr && list1 != nullptr )
      {
         return list1;
      }
      if ( list2 == nullptr && list1 == nullptr )
      {
         return nullptr;
      }

      endL( list1, list2 );
      sorted( byPass( list1 ) );

      return list1;
   }

   void sorted(vector<ListNode*> ptrList )
   {
      int size_vec = ptrList.size();

      for ( int counter1 = 0; counter1 < size_vec - 1; ++counter1 )
      {
         for ( int counter2 = counter1 + 1; counter2 < size_vec; ++counter2 )
         {
            if ( ptrList[counter1]->val > ptrList[counter2]->val )
            {
               swap( ptrList[counter1]->val, ptrList[counter2]->val );
            }
         }
      }
   }

   void endL( ListNode* list, ListNode* list2 )
   {

      if( list->next != nullptr )
      {
         endL( list->next, list2 );
      }
      else
      {
         list->next = list2;
      }
      
   }

   vector<ListNode*> byPass( ListNode* listAll )
   {
      static vector<ListNode*> ptrList;

      for ( auto u : ptrList )
         cout << u->val;

      ptrList.push_back( listAll );
      
      if ( listAll->next )
      {
         byPass( listAll->next );
      }

      return ptrList;
   }
};

//int main()
//{
//   ListNode* fuck = new ListNode( 1, nullptr );
//   ListNode* fuck2 = new ListNode( 2, nullptr );
//
//   Solution sol;
//
//   auto u = sol.mergeTwoLists( fuck, fuck2 );
//
//   return 1;
//}