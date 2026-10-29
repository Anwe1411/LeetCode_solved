class Solution {
public:
    void dfs(vector<int>&candidates,int target,int s,vector<int>&comb,vector<vector<int>>&res){
        if(target<0)return;
        if(target==0){
            res.push_back(comb);
            return;
        }
        for(int i=s;i<candidates.size();i++){
            if(i>s&&candidates[i]==candidates[i-1]) continue;
            if(candidates[i]>target) break;
            comb.push_back(candidates[i]);
            dfs(candidates,target-candidates[i],i+1,comb,res);
            comb.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        sort(candidates.begin(),candidates.end());
        vector<int>comb;
        dfs(candidates,target,0,comb,ans);
        return ans;
    }
};