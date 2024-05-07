class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() <= 1) return 0;

        int profit = 0;
        int min_price = prices[0];

        for (int x: prices) {
            if (x < min_price) min_price = x;
            else if (x - min_price > profit) profit = x - min_price;
        }

        return profit;
    }
};