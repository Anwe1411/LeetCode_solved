class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int left=0,right=0,product=1,cnt=0;
        int n=nums.size();
        if(k<=1)return 0;
        while(right<n){
            product*=nums[right];
            while(product>=k) product/=nums[left++];
            cnt+=1+(right-left);
            right++;
        }
        return cnt;
    }
};