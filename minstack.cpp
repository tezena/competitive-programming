class MinStack {

    stack<pair<int,int>> stk;
  
public:
    MinStack() {
    
        
    }
    
    void push(int val) {
            if(!stk.empty()){
                int mini=min(val,stk.top().second);
                stk.push({val,mini});
            }else
             stk.push({val,val});
      
    }
    
    void pop() {
       
        stk.pop();
    }
    
    int top() {
        
        return stk.top().first; 
        
    }
    
    int getMin() {
        return stk.top().second;
        
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
