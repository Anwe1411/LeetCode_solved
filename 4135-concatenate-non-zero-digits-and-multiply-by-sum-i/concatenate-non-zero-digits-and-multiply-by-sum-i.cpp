class Solution {
public:
    long long sumAndMultiply(int n) {
         long long sum=0;
         string x="";
         string num=to_string(n);
        for(char c:num) {
            if(c!='0')x+=c;
        sum+=c-'0';
    }
    if (x.empty())
        return 0;
         long long val=stoll(x);
         return val*sum;
    }
};