class Solution {
public:
    string largestNumber(vector<int>& nums) {
        bool flag=false;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                flag=true;
            }
        }
        if(flag==false){
            return "0";
        }
        sort(nums.begin(),nums.end(),[](int a,int b){
            string s1=to_string(a)+to_string(b);
            string s2=to_string(b)+to_string(a);
            return s1>s2;
        });
        string res="";
        for(int i=0;i<nums.size();i++){
            res+=to_string(nums[i]);
        }
        return res;
    }
};