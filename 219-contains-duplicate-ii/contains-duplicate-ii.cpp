class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
    bool flag=false;
    unordered_map<int,int> m1;
    for(int i=0;i<nums.size();i++){
        if(m1.find(nums[i])!=m1.end()){
            if(i-m1[nums[i]]<=k){
                flag=true;
                break;
            }
        }
        m1[nums[i]]=i;
    }
    return flag;
    }
};