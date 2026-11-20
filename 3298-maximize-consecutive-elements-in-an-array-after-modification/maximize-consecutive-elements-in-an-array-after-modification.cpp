class Solution {
public:
    int maxSelectedElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        unordered_map<int,int>dp;
        int ans=0;
        for(int n:nums){
            dp[n+1]=dp[n]+1;
            dp[n]=dp[n-1]+1;
            ans=max({ans,dp[n],dp[n+1]});
        }
        return ans;
    }
};