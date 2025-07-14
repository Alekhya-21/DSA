class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
    vector<int> res(temperatures.size());
    stack<pair<int,int>> st;
    for(int i=temperatures.size()-1;i>=0;i--){
        if(i==temperatures.size()-1){
            res[i]=0;
            st.push({temperatures[i],i});
        }
        if(st.top().first>temperatures[i]){
            res[i]=st.top().second-i;
            st.push({temperatures[i],i});
        }
        else{
            while(!st.empty() && st.top().first<=temperatures[i]){
                st.pop();
            }
            if(!st.empty()){
                res[i]=st.top().second-i;
            }
            else{
                res[i]=0;
            }
            st.push({temperatures[i],i});
        }
    }
    return res;

















    // vector<int> res(temperatures.size());
    // stack<pair<int,int>> st;
    // for(int i=temperatures.size()-1;i>=0;i--){
    //     bool flag=false;
    //     if(i==temperatures.size()-1){
    //         res[i]=0;
    //     }
    //     else if(!st.empty() && st.top().first>temperatures[i]){
    //         res[i]=st.top().second-i;
    //     }
    //     else{
    //         while(!st.empty() && st.top().first<=temperatures[i]){
    //             st.pop();
    //         }
    //         if(st.empty()){
    //             res[i]=0;
    //             flag=true;
    //         }
    //         if(!flag){
    //             res[i]=st.top().second-i;
    //         }
    //     }
    //     st.push({temperatures[i],i});
    // }
    // return res;
    }
};