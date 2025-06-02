class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    int low=0,high=1;
    while(high<nums.size()){
        if(nums[high]!=0 && nums[low]==0){
            swap(nums[low],nums[high]);
            low++;
        }
        if(nums[low]!=0){
            low++;
        }
        high++;
    }
















    // int low=0,high=0;
    // while(high<nums.size()){
    //     if(nums[high]!=0){
    //         swap(nums[low],nums[high]);
    //         low++;
    //     }
    //     high++;
    // }
    }
};