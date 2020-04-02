/*
author : Jirayuwat Boonchan
school : PSU.Wit
topic  : tree query
*/
#include <bits/stdc++.h>
#define FOR(i,s,n) for(int i=s;i<n;i++)
#define FORR(i,s,n) for(int i=s;i>=n;i--)
#define pb push_back
#define MOD 1000000007
using namespace std;
typedef long long ll ;
typedef pair<int,int> pii ;
typedef vector<int> vi;
typedef tuple<int,int,int> tiii;
int n,m;
int timee =0;
vector<vector<int>> T;
vector<int> p,d,tin,tout;
void dfs(int v,int par = -1,int dep =0){
    p[v] = par;
    d[v] = dep;
    tin[v] = timee ++;
    for(auto i : T[v]) if(i != par ) dfs(i,v,dep+1);
    tout[v] = timee++;

}

int main( ) {
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    //cout.tie(NULL);
    cin>>n>>m;
    p = d = tin = tout = vector<int>(n);
    T = vector<vector<int>>(n);
    FOR(i,1,n){
        int u,v;
        cin>>u>>v;
        u--,v--;
        T[u].pb(v);
        T[v].pb(u);
    }
    dfs(0);
    FOR(i,0,m){
        int k;
        cin>>k;
        vector<int> log(k);
        int maxd = 0    ;
        for(auto &it :log) {
            cin>>it;
            it--;
            if(d[it] > d[maxd]) maxd = it;
        }
        for(int &it : log) if(it != maxd && p[it] != -1) it = p[it];
        bool ck = true;
        for(int &it : log){
            if(tin[it] <= tin[maxd] && tout[maxd] <= tout[it]);
            else ck = false;
        }
        if(ck) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}
/*

*/