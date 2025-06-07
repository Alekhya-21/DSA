class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
    int l=nums.size();
    vector<int> ans(2*l);
    for(int i=0;i<l;i++){
        ans[i]=nums[i];
        ans[l+i]=nums[i];
    }
    return ans;
    }
};