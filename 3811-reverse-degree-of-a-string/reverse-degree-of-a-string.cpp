class Solution {
public:
    int reverseDegree(string s) {
        int ans=0;
        for(int i=0;i<s.length();i++){
            char c=s[i];
            int rev=26-(c-'a');
            ans+=rev*(i+1);

        }
        return ans;
    }
};