class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxProfit = INT_MIN;
        int minPrice = INT_MAX;
        for(int i=0;i<n;i++) {
            minPrice = min(minPrice,prices[i]);
            maxProfit = max(maxProfit,prices[i] - minPrice);
        }
        if(maxProfit <= 0) return 0;
        else return maxProfit;
    }
};