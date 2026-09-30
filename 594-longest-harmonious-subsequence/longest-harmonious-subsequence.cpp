class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l=0,r=1,len=0;
        while(r<nums.size()){
            int diff=nums[r]-nums[l];
            if(diff==1)len=max(len,r-l+1);
            if(diff<=1) r++;
            else l++;
        }
        return len;
    }
};