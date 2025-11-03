class Solution {
public:
    int func(vector<int>& weights, int capacity,int days){
        int count=1;
        int sum=0;
        for(int i=0;i<weights.size();i++){
            if(sum+weights[i]>capacity){
                sum=0;
                count++;
            }
            sum+=weights[i];
        }
        return count;
    }
    int shipWithinDays(vector<int>& weights, int days) {
    int low=*max_element(weights.begin(),weights.end());
    int high=accumulate(weights.begin(),weights.end(),0);
    int ans=high;
    while(low<=high){
        int mid=(low+high)/2;
        int count=func(weights,mid,days);
        if(count<=days){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
    }
};