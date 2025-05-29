class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> arr;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]!=nums[i+1]){
                arr.push_back(nums[i]);
            }
        }
        arr.push_back(nums[nums.size()-1]);
        nums=arr;
        return nums.size();
    }
};