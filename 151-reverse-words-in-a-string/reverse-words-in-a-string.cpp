class Solution {
public:
    string reverseWords(string s) {
       vector<string>words;
       int n=s.size();
       int i=0;
       while(i<n){
        while(i<n&&s[i]==' ') i++;
        string w="";
        while(i<n&&s[i]!=' '){
            w+=s[i];
            i++;
        }
        if(!w.empty()) words.push_back(w);

       }
       reverse(words.begin(),words.end());
         string ans = "";
        for (int i = 0; i < words.size(); i++) {
            ans += words[i];
            if (i != words.size() - 1)
                ans += " ";
        }
        return ans;
    }
};