//leetcode link is :) 
//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int maximum = 0;
        int minimum = prices[0];
        
        for(int i=0;i<prices.size();i++)
        {
            minimum = min(minimum,prices[i]);
            int profit = prices[i] - minimum;
            maximum = max(maximum,profit);
        }
        return maximum;
    }
    
};
