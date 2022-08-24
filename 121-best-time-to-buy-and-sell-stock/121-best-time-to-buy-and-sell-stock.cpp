class Solution {
public:
    //first find the minumum value from array to buy and check the differnce of that value with all the values of array and select the maximum difference
    int maxProfit(vector<int>& prices) {
        int buy=INT_MAX;
        int sell=0;
        for(int i=0;i<prices.size();i++)
        {
           /* if(prices[i]<buy)
                buy=prices[i];
            if(sell<prices[i]-buy)
                sell=prices[i]-buy;*/
            
            buy=min(buy,prices[i]);
            sell=max(sell,prices[i]-buy);
        }
        return sell;
    }
};