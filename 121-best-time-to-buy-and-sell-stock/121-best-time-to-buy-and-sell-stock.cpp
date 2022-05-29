class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int maxProf = 0, minNum = INT_MAX;
        for(int i = 0 ; i < prices.size() ; i++) {
            if(prices[i] < minNum)
                minNum = prices[i];
            if(prices[i] - minNum > maxProf)
                maxProf = prices[i] - minNum;
        }
        return maxProf;    }
};