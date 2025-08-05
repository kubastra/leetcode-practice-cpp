class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int size = prices.size();
        for(int i = 1; i < size; ++i){
            if(prices[i - 1] < prices[i]){
                profit +=  prices[i] - prices[i - 1];
            } 
        }
        return profit;
    }
};
