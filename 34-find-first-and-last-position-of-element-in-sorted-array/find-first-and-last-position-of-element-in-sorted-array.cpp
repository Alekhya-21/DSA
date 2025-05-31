class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> res;
    for(int i=0;i<nums.size();i++){
        if(target==nums[i]){
            res.push_back(i);
            break;
        }
    }
    for(int i=nums.size()-1;i>=0;i--){
        if(target==nums[i]){
            res.push_back(i);
            break;
        }
    }
    if(res.empty()){
        res.push_back(-1);
        res.push_back(-1);
    }
    return res;
    }
};