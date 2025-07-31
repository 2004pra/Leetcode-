class MinStack {
        stack<long long> s;
    long long minEle;
public:
    MinStack() {
        while (!s.empty()) s.pop();
    }
    
    void push(int val) {
        if(s.size()==0){
            s.push(val);
            minEle=val;
        }
        else{
            if(val>=minEle){
                s.push(val);
            }
            else if(val<minEle){
                s.push(2LL*val-minEle);
                minEle=val;
            }
        }
    }
    
    void pop() {
        if(s.size()==0){
            return ;
        }
        else{
            if(s.top()>=minEle){
                s.pop();
            }
            else if(s.top()<minEle){
                minEle=2LL*minEle-s.top();
                s.pop();
            }
        }
    }
    
    int top() {
        if(s.size()==0){
            return -1;
        }
        else{
            if(s.top()>=minEle){
                return s.top();
            }
            else if(s.top()<minEle){
                return minEle;
            }
        }
        return -1;
    }
    
    int getMin() {
        if(s.size()==0) return -1;
        
        else return minEle;
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