class Solution {
public:
    int findPeakElement(vector<int>& nums) {
    auto it=max_element(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++){
        if(nums[i]==*it){
            return i;
        }
    }
    return -1;
    }
};