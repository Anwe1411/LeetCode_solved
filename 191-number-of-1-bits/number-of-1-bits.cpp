class Solution {
public:
    string tobinary(int n){
        if(n==0)return "0";
        string binary="";
        while(n>0){
            binary=char((n%2)+'0')+binary;
            n/=2;
        }
        return binary;
    }
    int hammingWeight(int n) {
        string binary=tobinary(n);
        int cnt=0;
        for(int i=0;i<binary.size();i++){
            if(binary[i]=='1') cnt++;
        }
        return cnt;
    }
};