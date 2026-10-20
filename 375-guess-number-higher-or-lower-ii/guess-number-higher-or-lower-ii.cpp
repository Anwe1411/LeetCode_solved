class Solution {
public:
    int getMoneyAmount(int n) {
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        for(int i=2;i<=n;++i){
            for(int j=0;j<=n-i;++j){
                int end=j+i;
                for(int k=j;k<end;++k){
                    int numpicked=k+1;
                    if(k==j) dp[j][end]=numpicked+dp[j+1][end];
                    else dp[j][end]=min(dp[j][end],max(dp[j][k],dp[k+1][end])+numpicked);
                }
            }
        } 
        return dp[0][n];
    }
};