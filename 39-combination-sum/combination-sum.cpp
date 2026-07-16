class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>comb;
        makeCombination(candidates,target,0,comb,0,ans);
        return ans;
    }
private:
    void makeCombination(std::vector<int>&candidates,int target,int indx,vector<int>&comb,int total,vector<vector<int>>&ans){
        if(total==target){
            ans.push_back(comb);
            return;
        }
        if(total>target||indx>=candidates.size())
           return;
        comb.push_back(candidates[indx]);
        makeCombination(candidates,target,indx,comb,total+candidates[indx],ans);
        comb.pop_back();
        makeCombination(candidates,target,indx+1,comb,total,ans);
    }
};