class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi=*max_element(nums.begin(),nums.end());
        nums.erase(find(nums.begin(),nums.end(), maxi));
        int maxi2=*max_element(nums.begin(),nums.end());
        return (maxi-1)*(maxi2-1);
    }
};