class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> a;
        sort(nums.begin(),nums.end());
        map<int,int> mp;
        for(int i = 0 ; i<nums.size() ; i++){
            mp[nums[i]]++;
        }
        for(int i = 0 ; i<nums.size() ; i++){
            
            for(auto i:mp){
                if(i.second>0){
                    a.push_back(i.first);
                    //cout<<i.second<<" ";
                    mp[i.first]--;
                    //cout<<i.second<<" "; 
                }
                
            }
            if(a.size()==nums.size()){
                break;
            }
        }
        return a;
    }
};