class Solution {
public:
    int majorityElement(vector<int>& nums) {
    for(int i=0;i<nums.size();i++){
        int c=count(nums.begin(),nums.end(),nums[i]);
        if(c>nums.size()/2){
            return nums[i];
        }
    }
    return -1;


























    // if(nums.size()<2){
    //     return nums[0];
    // }
    // int count=1;
    // sort(nums.begin(),nums.end());
    // for(int i=0;i<nums.size()-1;i++){
    //     if(nums[i]==nums[i+1]){
    //         count++;
    //         if(count>(nums.size()/2)){
    //             return nums[i];
    //         }
    //     }
    //     else{
    //         count=1;
    //     }
    // }
    // return 0;
    }
};