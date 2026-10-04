class Solution {
public:
    bool checkValidString(string s) {
        int lcnt=0,rcnt=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                lcnt++;
                rcnt++;
            }else if(s[i]==')'){
                lcnt--;
                rcnt--;
            }else{
                lcnt--;
                rcnt++;
            }
            
        
        if(rcnt<0)return false;
            if(lcnt<0)lcnt=0;
        }
            return lcnt==0;
            
    }
};