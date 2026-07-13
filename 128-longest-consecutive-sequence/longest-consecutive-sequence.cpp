class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       unordered_set<int>numset(nums.begin(),nums.end());
       int longest=0;
       for(int n:numset){
        if(numset.find(n-1)==numset.end()){
            int len=1;
            while(numset.find(n+len)!=numset.end()) len++;
            longest=max(longest,len);
        }
       } 
       return longest;
    }
};