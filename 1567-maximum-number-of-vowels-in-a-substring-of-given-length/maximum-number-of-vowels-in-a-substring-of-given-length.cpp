class Solution {
public:
    bool isVowel(char c){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') return true;
        return false;
    }
    int maxVowels(string s, int k) {
        int cnt=0;
        for(int i=0;i<k;i++){
            if(isVowel(s[i]))cnt++;
        }
        int maxi=cnt;
        for(int i=k;i<s.length();i++){
            cnt=cnt-isVowel(s[i-k])+isVowel(s[i]);
            maxi = max(maxi, cnt);
        }
    return maxi;
    }
};