class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    map<int,int> mp;
    for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
    }
    vector<pair<int,int>> arr(mp.begin(),mp.end());
    sort(arr.begin(),arr.end(),[](auto a,auto b){
        return a.second>b.second;
    });
    vector<int> res;
    int count=1;
    for(int i=0;i<arr.size();i++){
        if(count<=k){
            res.push_back(arr[i].first);
            count++;
        }
    }
    return res;
    }
};