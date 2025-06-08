class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    int i=0;
    string s;
    string res;
    while(i<strs[0].length()){
        s+=strs[0][i];
        int count=0;
        for(int j=0;j<strs.size();j++){
            if(strs[j].find(s)==0){
                count++;
            }
        }
        if(count==strs.size()){
            res=s;
        }
        else{
            return res;
        }
        i++;
    }
    return res;





















    // int i=0;
    // string s;
    // string res;
    // string first=strs[0];
    // while(i<first.length()){
    //     s+=first[i];
    //     int count=0;
    //     for(int i=0;i<strs.size();i++){
    //         if(strs[i].find(s)==0){
    //             count++;
    //         }
    //     }
    //     if(count==strs.size()){
    //         res=s;
    //     }
    //     else{
    //         return res;
    //     }
    //     i++;
    // }   
    // return res;
    }
};