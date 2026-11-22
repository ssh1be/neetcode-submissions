class MinStack {
private:
    vector<int> minStack;
public:
    MinStack() {

    }
    
    void push(int val) {
        minStack.push_back(val);
    }
    
    void pop() {
        minStack.pop_back();
    }
    
    int top() {
        return minStack[minStack.size()-1];
    }
    
    int getMin() {
        int min = std::numeric_limits<int>::max();
        for (int i : minStack){
            if (i < min){
                min = i;
            }
        }
        return min;
    }
};
