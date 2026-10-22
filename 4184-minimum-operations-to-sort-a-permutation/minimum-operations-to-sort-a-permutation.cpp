class Solution {
public:
   int minOperations(vector<int>& nums) {
    int n = nums.size();
    if (n == 0) return -1;

    int a = nums[0];
    int ans = INT_MAX;

    bool isAsc = true, isDesc = true;

    for (int i = 0; i < n; i++) {
        if (nums[i] != (a + i) % n)isAsc = false;
        if (nums[i] != ((a - i) % n + n) % n)isDesc = false;
    }
    if (isAsc)ans = (a == 0) ? 0 : min(n - a, a + 2);
    if (isDesc) {
        int k = (a + 1) % n;
        ans = min({ans, 1 + (n - k) % n, k + 1});
    }
    return ans == INT_MAX ? -1 : ans;
}
};