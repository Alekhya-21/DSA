class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    int low=0,high=0;
    while(high<nums.size()){
        if(nums[high]!=0){
            swap(nums[high],nums[low]);
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