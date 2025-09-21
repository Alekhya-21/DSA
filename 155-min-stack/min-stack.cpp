class MinStack {
    stack<pair<int,int>> m1;
public:
    MinStack() {
    
    }
    
    void push(int val) {
        if(m1.empty()){
            m1.push({val,val});
        }
        else{
             m1.push({val,min(val,m1.top().second)});
        }
    }
    
    void pop() {
        m1.pop();
    }
    
    int top() {
        int val=m1.top().first;
        return val;
    }
    
    int getMin() {
       int val= m1.top().second;
       return val;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */