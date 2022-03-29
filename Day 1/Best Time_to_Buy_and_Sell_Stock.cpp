class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size=prices.size();
        int maxprofit=0;
        int min=INT_MAX;
        for(int i=0;i<size;i++)
        {
           if(prices[i]<min)
           {
               min=prices[i];
               
           }
            else
            {
                maxprofit=max(maxprofit,prices[i]-min);
            }
        }
        return maxprofit;
    }
};
