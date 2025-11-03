class Solution {
public:
    int func(vector<int>& bloomDay,int k,int i){
        int res=0;
        int count=0;
        for(int j=0;j<bloomDay.size();j++){
            if(bloomDay[j]>i) {
            res+=count/k;
            count=0;}
            if(bloomDay[j]<=i){
                count++;
            }
        }
        res+=count/k;
        return res;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
    if(((long)m*k)>bloomDay.size())return -1;
    int low=*min_element(bloomDay.begin(),bloomDay.end());
    int high=*max_element(bloomDay.begin(),bloomDay.end());
    int ans=high;
    while(low<=high){
        int mid=(low+high)/2;
        int res=func(bloomDay,k,mid);
        if(res>=m){
            if(mid<ans)ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
    }
};