class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int low=0;
        int high=1;
        int maxSum=0;
        while(high<prices.size()){
            if(prices[low]>prices[high]){
                low=high;
            }
            else{
                int k=prices[high]-prices[low];
                maxSum=max(k,maxSum);
            }
            high++;
        }
        return maxSum;
    }
};