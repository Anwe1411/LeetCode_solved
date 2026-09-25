class Solution {
public:
    set<string> multiply(set<string> &a, set<string> &b) {
        set<string> result;

        for (const string &x : a) {
            for (const string &y : b) {
                result.insert(x + y);
            }
        }

        return result;
    }
    set<string>parse(string &s,int &i){
        set<string>result;
        set<string>current={""};
        while(i<s.size()&&s[i]!='}'){
            if(s[i]==','){
                result.insert(current.begin(),current.end());
                current={""};
                i++;
            }
            else if(s[i]=='{'){
                i++;
                set<string>inside=parse(s,i);
                i++;
                current = multiply(current, inside);


            }
             else {
                // Single lowercase letter
                set<string> letter = {string(1, s[i])};

                current = multiply(current, letter);

                i++;
            }
        }

        // Add the last term
        result.insert(current.begin(), current.end());

        return result;
        }

    
     
    vector<string> braceExpansionII(string expression) {
        int i=0;
        set<string>ans=parse(expression,i);
        return vector<string>(ans.begin(),ans.end());

    }
};