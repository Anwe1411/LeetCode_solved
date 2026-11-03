class Solution {
public:
    vector<int>v;
    vector<vector<int>>ret;
    int area(vector<int>&r){
        return (r[2]-r[0]+1)*(r[3]-r[1]+1);
    }
    Solution(vector<vector<int>>& rects) {
        ret=rects;
        int totalA=0;
        for(auto i:ret){
            totalA+=area(i);
            v.push_back(totalA);
        }
    }
    
    vector<int> pick() {
        int rnd=rand()%v.back();
        int indx=upper_bound(v.begin(),v.end(),rnd)-v.begin();
        auto r=ret[indx];
        int x=rand()%(r[2]-r[0]+1)+r[0];
        int y=rand()%(r[3]-r[1]+1)+r[1];
        return {x,y};
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(rects);
 * vector<int> param_1 = obj->pick();
 */