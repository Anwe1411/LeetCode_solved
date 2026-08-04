class StockSpanner {
public:
    // Stack stores pairs of {price, span}
    stack<pair<int, int>> st;

    StockSpanner() {
    }
    
    int next(int price) {
        int span = 1;
        
        // Pop elements from the stack while the top element's price is <= current price
        while (!st.empty() && st.top().first <= price) {
            span += st.top().second;
            st.pop();
        }
        
        // Push the current price and its accumulated span
        st.push({price, span});
        
        return span;
    }
};