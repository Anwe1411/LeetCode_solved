class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())return false;
        unordered_map<char,int>scount,tcount;
        for(int i=0;i<s.length();i++){
            scount[s[i]]=1+scount[s[i]];
            tcount[t[i]]=1+tcount[t[i]];
        }
        return scount==tcount;
    }
};