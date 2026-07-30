class RecentCounter {
private:
vector<int>records;
int st;
public:
    RecentCounter():st(0) {}
    int ping(int t) {
        records.push_back(t);
        while(records[st]<t-3000) st++;
        return records.size()-st;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */