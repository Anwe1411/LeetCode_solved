class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()) return false;
        unordered_map<char,int>s1cnt,s2cnt;
        for(int i=0;i<s1.length();i++){
            s1cnt[s1[i]]++;
            s2cnt[s2[i]]++;
        }
        if(s1cnt==s2cnt) return true;
        int left=0;
        for(int right=s1.length();right<s2.length();right++){
            s2cnt[s2[right]]++;
            s2cnt[s2[left]]--;
            if(s2cnt[s2[left]]==0) s2cnt.erase(s2[left]);
            left++;
            if(s1cnt==s2cnt) return true;
        }
        return false;
    }
};