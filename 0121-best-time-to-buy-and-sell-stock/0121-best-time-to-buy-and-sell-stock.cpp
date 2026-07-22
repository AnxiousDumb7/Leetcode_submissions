class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buy_price = prices[0];
        int curr_profit = 0;
        int max_profit = 0;

        for (int i = 1; i < n; i++) {

            if (prices[i] < buy_price)
                buy_price = prices[i];

            curr_profit = prices[i] - buy_price;
            max_profit = max(max_profit, curr_profit);
        }
        return max_profit;
    }
};