// C ++ программа для быстрой сортировки по однострочному списку
#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

// Часть сорта
int partOfSortHoara( std::vector<int>& arr, int left, int right )
{
   int pivot = arr[std::floor( (left + right) / 2 )];

   while ( left <= right )
   {
      while ( arr[left] < pivot ) left++;
      while ( arr[right] > pivot ) right--;

      if ( left <= right )
      {
         int temp = arr[left];
         arr[left] = arr[right];
         arr[right] = temp;
         left++;
         right--;
      }

   }
   return left;
}

// Полная выборка
void quikSortHoara( std::vector<int>& arr, int start, int end )
{
   if ( start >= end ) return;

   int rightStart = partOfSortHoara( arr, start, end );
   quikSortHoara( arr, start, rightStart - 1 );
   quikSortHoara( arr, rightStart, end );
};

//void swap( int* a, int* b )
//{
//   int t = *a;
//   *a = *b;
//   *b = t;
//}
//
//int partition( int arr[], int low, int high )
//{
//   int pivot = arr[high]; // pivot
//   int i = ( low - 1 ); // Index of smaller element and indicates the right position of pivot found so far
//
//   for ( int j = low; j <= high - 1; j++ )
//   {
//      // If current element is smaller than the pivot
//      if ( arr[j] < pivot )
//      {
//         i++; // increment index of smaller element
//         swap( &arr[i], &arr[j] );
//      }
//   }
//   swap( &arr[i + 1], &arr[high] );
//   return ( i + 1 );
//}
//
//void quickSort( int arr[], int low, int high )
//{
//   if ( low < high )
//   {
//      int pi = partition( arr, low, high );
//
//      quickSort( arr, low, pi - 1 );
//      quickSort( arr, pi + 1, high );
//   }
//}
//
///* Function to print an array */
//void printArray( int arr[], int size )
//{
//   int i;
//   for ( i = 0; i < size; i++ )
//      cout << arr[i] << " ";
//   cout << endl;
//}


int main()
{
   int arr[] = { 10, 7, 8, 9, 1, 5 };
   std::vector check{ 5, 2, 3, 1 };
   //int n = sizeof( arr ) / sizeof( arr[0] );
   //
   //quickSort( arr, 0, n - 1 );
   //
   //printArray( arr, n );

   quikSortHoara( check, 0, check.size() );
   return 0;
}