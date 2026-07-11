class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int row=matrix.size();
        int col=matrix[0].size();
        int x=0,y=0,dx=1,dy=0;
        for(int i=0;i<row*col;i++){
            ans.push_back(matrix[y][x]);
            matrix[y][x]=-101;
            if(!(0<=x+dx&&x+dx<col&&0<=y+dy&&y+dy<row)||matrix[y+dy][x+dx]==-101){
                int temp=dx;
                dx=-dy;
                dy=temp;
            }
            x+=dx;
            y+=dy;
        }
        return ans;
    }
};