#define ll long long
class Solution {

public:
    int shortestPath(int n, vector<vector<int>>& edges, string labels, int k) {
        vector<vector<pair<ll,ll>>>adj(n);
        for(auto i:edges)
           adj[i[0]].push_back({i[1],i[2]});
        vector<vector<ll>>dist(n,vector<ll>(k+1,LLONG_MAX/2));
        priority_queue<vector<ll>,vector<vector<ll>>,greater<>>pq;
        dist[0][1]=0;
        pq.push({0,0,1});
        while(!pq.empty()){
            vector<ll>curr=pq.top();
            pq.pop();
            ll d=curr[0];
            ll u=curr[1];
            ll r=curr[2];
            if(d>dist[u][r]) continue;
            for(auto i:adj[u]){
                int v=i.first;
                int w=i.second;
                int newr=1;
                if(labels[v]==labels[u]) newr=r+1;
                if(newr>k) continue;
                ll nd=d+w;
                if(nd<dist[v][newr]){
                    dist[v][newr]=nd;
                    pq.push({nd,(ll)v,(ll)newr});
                }
            }
        }
        ll sol = LLONG_MAX;
        for(int i = 0;i<=k;i++){
            sol = min(sol,dist[n-1][i]);
        }
        if(sol == LLONG_MAX){
            return -1;
        }
        return sol;
    }
};