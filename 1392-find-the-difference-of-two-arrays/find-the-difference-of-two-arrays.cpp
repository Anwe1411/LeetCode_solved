class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>set1(nums1.begin(),nums1.end());
        unordered_set<int>set2(nums2.begin(),nums2.end());
        vector<int>dist_nums1,dist_nums2;
        for(int n1:set1)
            if(set2.count(n1)==0) dist_nums1.push_back(n1);
        for(int n2:set2)
            if(set1.count(n2)==0) dist_nums2.push_back(n2);
        return {dist_nums1,dist_nums2};
    }
};