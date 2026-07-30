class Solution {
public:
    int minimumPushes(string word) {
        int cnt=0;
        unordered_map<int,int>um;
        int st=2;
        for(char c:word){
            if(st>9) st=2;
            um[st]++;
            cnt+=um[st];
            st++;
        }
        return cnt;
    }
};