/*
author : Jirayuwat Boonchan
school : PSU.Wit
topic  : exercising walk
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

int main( ) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    int x,y,x1,y1,x2,y2; 
    int l,r,d,u;
    FOR(_i,0,t){
        cin>>l>>r>>d>>u>>x>>y>>x1>>y1>>x2>>y2;
        bool ck = true;
        if(x == x1 && x == x2 && (l || r)) ck = false;
        if(y == y1 && y == y2 && (u || d)) ck = false;
        x += r-l;
        y += u-d;
        if(x1 <= x && x2 >= x && y1 <= y && y2 >= y && ck) cout<<"Yes";
        else cout<<"No";
        cout<<'\n';
    }
    return 0;
}
/*

*/