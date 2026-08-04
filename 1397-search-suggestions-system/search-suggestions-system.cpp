class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        vector<vector<string>>output;
        string acc="";
        for(char &ch:searchWord){
            acc.push_back(ch);
            vector<string>matched;
            for(string &p:products){
                if(p.size()<acc.size()) continue;
                bool isvalid=true;
                for(size_t i=0;i<acc.size();i++){
                    if(p[i]!=acc[i]){
                        isvalid=false;
                        break;
                    }
                }
                if(isvalid) matched.push_back(p);
            }
                sort(matched.begin(),matched.end());
                 std::sort(matched.begin(), matched.end());
            output.push_back(std::vector<std::string>(matched.begin(), matched.begin() + std::min((size_t)3, matched.size())));
            
        }
        return output;
    }
};