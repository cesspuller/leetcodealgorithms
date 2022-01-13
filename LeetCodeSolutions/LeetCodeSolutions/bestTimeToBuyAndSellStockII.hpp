#ifndef _T_best_Time_To_Buy_And_Sell_Stock_ll_HPP_
#define _T_best_Time_To_Buy_And_Sell_Stock_ll_HPP_

#include <vector>

using namespace std;

//! Для загрузки на лит код поменять название класса на Solution
class TBestTimeToBuyAndSellStockll
{
   public:

      int maxProfit( vector<int>& prices )
      {
         int maxProfit = 0;

         for ( int counter = 1; counter < prices.size(); ++counter )
         {
            if ( prices[counter] > prices[counter - 1] )
               maxProfit += prices[counter] - prices[counter - 1];
         }

         return maxProfit;
      }
};

#endif // _T_best_Time_To_Buy_And_Sell_Stock_ll_HPP_

