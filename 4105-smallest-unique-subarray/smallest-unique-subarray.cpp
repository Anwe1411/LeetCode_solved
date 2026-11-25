class Solution {
public:
    int smallestUniqueSubarray(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>names{nums};
        for(int i=1;2*i<=n;i*=2){
            unordered_map<long long,int>ids;
            vector<int>whole;
            for(auto[a,b]:views::zip(names.back(),names.back()|views::drop(i)))
            whole.push_back(ids.try_emplace((long long)a<<32|b,ids.size()).first->second);
            names.push_back(std::move(whole));
        }
        auto found=[&](int length){
            int k=bit_width((unsigned)length)-1;
            unordered_map<long long,int>cnt;
            for(auto [a,b]:views::zip(names[k],names[k]|views::drop(length-(1<<k)))) cnt[(long long)a<<32|b]++;
            return ranges::any_of(cnt,[](auto &entry){return entry.second==1;});
        };
        return *ranges::partition_point(views::iota(1,n),not_fn(found));
    }
};