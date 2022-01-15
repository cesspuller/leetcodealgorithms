#ifndef _T_intersection_Of_Two_Arrays_HPP_
#define _T_intersection_Of_Two_Arrays_HPP_

#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

//! Для загрузки на лит код поменять название класса на Solution
class TIntersectionOfTwoArrays 
{
   public:

      vector<int> intersect( vector<int>& nums1, vector<int>& nums2 )
      {
         vector<int> log;

         sort( nums1.begin(), nums1.end() );
         sort( nums2.begin(), nums2.end() );
         set_intersection( nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), back_inserter( log ) );

         return log;


      }
};

#endif // _T_intersection_Of_Two_Arrays_HPP_
