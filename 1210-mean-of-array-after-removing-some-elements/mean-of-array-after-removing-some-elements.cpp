class Solution {
public:
    double trimMean(vector<int>& arr) {
    sort(arr.begin(),arr.end());
    int rem=arr.size()*5/100;
    int sum=0,count=0;
    for(int i=rem;i<arr.size()-rem;i++){
        sum+=arr[i];
        count++;
    }
    double result=double(sum)/count;
    return result;
    }
};