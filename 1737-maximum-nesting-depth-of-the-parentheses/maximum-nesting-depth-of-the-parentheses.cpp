class Solution {
public:
    int maxDepth(string s) {
        int depth=0,r=0;
        for(char c:s){
            if(c==')'){
                depth--;
                continue;
            }
            if(c!='(') continue;
            depth++;
            if(depth>r) r=depth;
        }
        return r;
    }
};