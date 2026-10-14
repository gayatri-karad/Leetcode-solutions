class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPrf=0;
        int bestBuy=prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i]>bestBuy){
                maxPrf=max(maxPrf, prices[i]-bestBuy);
            }
            bestBuy=min(prices[i], bestBuy);//to update bestbuy everytime
        }
        return maxPrf;
    }
};
