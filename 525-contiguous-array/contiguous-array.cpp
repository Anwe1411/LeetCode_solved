class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>mp;
        int zero=0,one=0,max_len=0;
        mp[0]=-1;
        for(int i=0;i<nums.size();i++){
            nums[i]==0? zero++:one++;
            int diff=zero-one;
            if(mp.count(diff)) max_len=max(max_len,i-mp[diff]);
            else mp[diff]=i;
        }
        return max_len;
    }
};