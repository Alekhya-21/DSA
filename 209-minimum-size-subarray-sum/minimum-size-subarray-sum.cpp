class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
    int low=0;
    int high=0;
    int minWindow=INT_MAX;
    int sum=0;
    bool flag=false;
    while(high<nums.size()){
        sum+=nums[high];
        high++;
        while(sum>=target){
            int currWindow=high-low;
            minWindow=min(minWindow,currWindow);
            flag=true;
            sum-=nums[low];
            low++;
        }
    }
    if(flag==true){
        return minWindow;
    }
    return 0;     

















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