class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.length();
        int freq[26]={0};
        int maxlen=0,maxFreq=0,left=0,right=0;
        while(right<n){
            char ch=s[right];
            freq[ch-'A']++;
            maxFreq=max(maxFreq,freq[ch-'A']);
            if((right-left+1)-maxFreq>k){
                freq[s[left]-'A']--;
                left++;
            }
            maxlen=max(maxlen,right-left+1);
            right++;
        }
        return maxlen;
    }
};