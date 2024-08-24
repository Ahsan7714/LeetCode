class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=0;
        int max_profit=0;
        for(int sell=1;sell<prices.size();++sell){
            if(prices[sell] < prices[buy]){
                buy=sell;
            }
            int profit = prices[sell]-prices[buy];
            max_profit = max( max_profit , profit);
        }
        return  max_profit;
    }
};