class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int rows=mat.size();
        int cols=mat[0].size();
        int n=mat.size();
        for(int i=0;i<n;i++) sum=sum+mat[i][i];
        for(int i=0;i<n;i++) sum+=mat[i][n-i-1];
        if(n&1) sum-=mat[n/2][n/2];
        return sum;
    }
};