/*
author : Jirayuwat Boonchan
school : PSU.Wit
topic  : limericks
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
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    //cout.tie(NULL);
    int n;
    cin>>n;
    int a = 2;
    int b = a;
    while(a <= n){
        if(a * b == n) {
            cout<<a<<b;
            break;
        }
        if(a * b > n ) {
            a ++;
            b = a;
        } 
        else b++;
    }
    return 0;
}
/*

*/