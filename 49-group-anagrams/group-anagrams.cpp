class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<pair<string,string>> arr;  
    for(int i=0;i<strs.size();i++){
        string sortedstr=strs[i];
        sort(sortedstr.begin(),sortedstr.end());
        arr.push_back({sortedstr,strs[i]});
    }
    sort(arr.begin(),arr.end());
    for(auto i:arr){
        cout<<i.first<<" "<<i.second<<endl;
    }
    vector<vector<string>> res;
    vector<string> temp;
    for(int i=0;i<arr.size();i++){
        temp.push_back(arr[i].second);
        if(i==arr.size()-1 || arr[i].first!=arr[i+1].first){
            res.push_back(temp);
            temp.clear();
        }
    }
    return res;
    }
};