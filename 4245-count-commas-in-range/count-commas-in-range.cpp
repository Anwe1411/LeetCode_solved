class Solution {
public:
    int digits(int n){
        int count=0;
        n=abs(n);
        if(n==0) return 1;
    while(n>0){
        count++;
        n/=10;
    }
    return count;
    }
    int countCommas(int n) {
        int dig=digits(n);
        int commas=0;
        for(int i=1;i<=n;i++) {
            int dig=digits(i);
            if (dig >= 4) 
                commas += (dig - 1) / 3;
        }
       return commas;
    }
};