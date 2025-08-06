class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
    bool flag=false;
    unordered_map<int,int> ll;
    for(int i=0;i<nums.size();i++){
        if(ll.find(nums[i])!=ll.end()){
            if(abs(ll[nums[i]]-i)<=k){
                flag=true;
                break;
            }
        }
        ll[nums[i]]=i;
    }
    return flag;
    }
};