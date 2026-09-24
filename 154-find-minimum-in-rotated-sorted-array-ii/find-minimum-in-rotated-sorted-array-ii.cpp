class Solution {
public:
    int findMin(vector<int>& nums) {
        int minelem=*min_element(nums.begin(),nums.end());
        return minelem;
    }
};