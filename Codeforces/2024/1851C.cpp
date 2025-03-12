#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long 
#define pii pair<int,int>
#define vvc vector<vector<char>>
#define vvi vector<vector<int>>
#define vpii vector<pair<int,int>>
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define fi first 
#define se second
#define pb push_back
#define outs(x) cout << x << " "
#define outln(x) cout << x << '\n'
#define FOR(i,s,e) for(int i=s;i<e;i++)
#define FOREV(i,s,e) for(int i=s; i>=e;i--)
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define tc freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
using namespace std;

int main(){
    fastio
    int t; cin >> t;
    while(t--) {
        int n,k;
        map<int,int> mp;
        cin >> n >> k;
        int a[n] = {0};
        bool f = 0;
        FOR(i,0,n) {
            cin >> a[i];
            if(f) {
                mp[a[i]]++;
            } else {
                if(a[i]==a[0])mp[a[0]]++;
            }
            f=mp[a[0]] >= k;
        }

        if(mp[a[n-1]] >= k && f) {
            cout << "YES\n"; 
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}