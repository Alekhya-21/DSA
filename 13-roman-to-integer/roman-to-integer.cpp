class Solution {
public:
    int romanToInt(string s) {
    // subtract if smaller before than bigger that is the logic
    unordered_map<char,int> m1={{
        'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
    int count=0;
    for(int i=0;i<s.length();i++){
        if(i+1<s.length() && m1[s[i]]<m1[s[i+1]]){
            count=count+m1[s[i+1]]-m1[s[i]];
            i++;
        }
        else{
            count=count+m1[s[i]];
        }
    }
    return count;
    }
};