class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minimum = prices[0];
        int profit = 0;
        int maxProfit = 0;
        for(int i = 0; i<prices.size(); i++){
            minimum = min(minimum, prices[i]);

            profit = prices[i] - minimum;
             maxProfit = max(profit, maxProfit);
        }
        return maxProfit;
    }
};