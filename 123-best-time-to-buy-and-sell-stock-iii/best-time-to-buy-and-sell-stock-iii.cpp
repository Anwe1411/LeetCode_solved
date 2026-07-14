class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy1=-prices[0];
        int sel1=0;
        int buy2=-prices[0];
        int sel2=0;
        for(int i=1;i<prices.size();i++){
            int price=prices[i];
            buy1=max(buy1,-price);
            sel1=max(sel1,buy1+price);
            buy2=max(buy2,sel1-price);
            sel2=max(sel2,buy2+price);
        }
        return sel2;
    }
};