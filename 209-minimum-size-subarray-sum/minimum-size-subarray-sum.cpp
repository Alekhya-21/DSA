class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
    int n=nums.size();
    int minWindow=INT_MAX;
    int flag=0;
    int currSum=0;
    int low=0,high=0; // two pointers
    while(high<n){
        currSum+=nums[high];
        high++;
        while(currSum>=target){
            int currWindowSize=high-low;
            minWindow=min(minWindow,currWindowSize);
            flag=1;
            currSum-=nums[low];
            low++;
        }
    }
    if(flag==1){
        return minWindow;
    }
    else{
        return 0;
    }
    }
};