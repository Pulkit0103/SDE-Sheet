class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0 ;
        int buy = prices[0];
        int sell = 0;
        for(int i = 1; i< n ; i++){
            sell = prices[i];
            if(sell < buy){
                buy = prices[i];
                sell = prices[i];
            }
            profit = max ( profit , sell - buy);
        }
        return profit;
    }
};