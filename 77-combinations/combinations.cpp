class Solution {
private:
    void backtrack(int s,vector<int>&combine,vector<vector<int>>&ans,int n,int k){
        if(combine.size()==k){
            ans.push_back(combine);
            return;
        }
        for(int i=s;i<=n;i++){
            combine.push_back(i);
            backtrack(i+1,combine,ans,n,k);
            combine.pop_back();
        }
    }
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>combine;
        backtrack(1,combine,ans,n,k);
        return ans;
    }
};