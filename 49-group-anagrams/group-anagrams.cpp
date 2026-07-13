class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(string &s:strs){
            string val=s;
            sort(val.begin(),val.end());
            mp[val].push_back(s);
        }
        vector<vector<string>>res;
        for(auto &entry:mp) res.push_back(entry.second);
        return res;
    }
};