class Solution {
public:
    int uniquePaths(vector<vector<int>>& grid) {
        const int mod=1e9+7;
        vector<int>down(grid[0].size());
        down[0]=1;
        for(auto &r:grid){
            int right=0;
            for(int j=0;j<r.size();j++){
                if(r[j]) swap(right,down[j]);
                else right=down[j]=(right+down[j])%mod;
            }
        }
        return down.back();
    }
};