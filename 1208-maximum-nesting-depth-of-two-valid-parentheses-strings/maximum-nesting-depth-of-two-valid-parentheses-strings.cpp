class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        vector<int>maxD(seq.size());
        int depth=0;
        for(int i=0;i<seq.size();++i){
            if(seq[i]=='('){
                ++depth;
                maxD[i]=depth%2;
            }else{
                maxD[i]=depth%2;
                --depth;
            }
        }
        return maxD;
    }
};