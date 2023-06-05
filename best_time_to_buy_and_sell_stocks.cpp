class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice=INT_MAX;
        int profit=0;
        for(auto it:prices){
            minprice=min(minprice,it);
            profit=max(profit,it-minprice);
        }
        return profit;
    }
};
