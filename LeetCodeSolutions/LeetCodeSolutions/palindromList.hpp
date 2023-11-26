#pragma once
#include <vector>

using namespace std;

 struct ListNode
{
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution
{
   public:

   vector<int> vecL;

   void byPass( ListNode* head )
   {
      if ( head != nullptr )
      {
         vecL.push_back( head->val );
         byPass( head->next );
      }
   }

   bool isPalindrome( ListNode* head )
   {

      if ( head == nullptr )
         return false;

      byPass( head );

      if ( ( vecL.size() % 2 ) != 0 )
         return false;

      auto vecLR = vecL;
      reverse( vecLR.begin(), vecLR.end() );

      if ( vecL == vecLR )
         return true;

      return false;


   }
};

