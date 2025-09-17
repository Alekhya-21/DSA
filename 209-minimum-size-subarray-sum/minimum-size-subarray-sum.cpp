class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
    int low=0,high=0;
    int sum=0;
    bool flag=0;
    int mini=INT_MAX;
    int window_size=0;
    while(high<nums.size()){
        sum=sum+nums[high];
        while(sum>=target){
            window_size=high-low+1;
            mini=min(mini,window_size);
            sum=sum-nums[low];
            low++;
            flag=1;
        }
        high++;
    }
    if(flag==0){
        return 0;
    }
    return mini;


















    // int n=nums.size();
    // int minWindow=INT_MAX;
    // int flag=0;
    // int currSum=0;
    // int low=0,high=0; // two pointers
    // while(high<n){
    //     currSum+=nums[high];
    //     high++;
    //     while(currSum>=target){
    //         int currWindowSize=high-low;
    //         minWindow=min(minWindow,currWindowSize);
    //         flag=1;
    //         currSum-=nums[low];
    //         low++;
    //     }
    // }
    // if(flag==1){
    //     return minWindow;
    // }
    // else{
    //     return 0;
    // }
    }
};