class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    vector<int> arr;
    int count=0;
    for(int i=1;i<nums.size();i++){
        if(nums[i]!=nums[i-1]){
            arr.push_back(nums[i-1]);
        }
    }
    arr.push_back(nums[nums.size()-1]);
    nums=arr;
    return nums.size();
    }
};