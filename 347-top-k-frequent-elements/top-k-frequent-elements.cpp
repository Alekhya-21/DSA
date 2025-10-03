class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    vector<int> res;
    map<int,int> m1;
    for(int i=0;i<nums.size();i++){
        m1[nums[i]]++;
    }
    // copy map into vector
    vector<pair<int,int>> vec(m1.begin(),m1.end());
    // sort the vector in descending order
    sort(vec.begin(),vec.end(),[](auto a,auto b){
        return a.second>b.second;
    });
    int count=1;
    // store the frequent elements in another vector
    for(auto it:vec){
        if(count<=k){
            res.push_back(it.first);
        }
        count++;
    }
    return res;
    }
};