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

ll euclid(pair<ll,ll> p1, pair<ll,ll> p2) {
    return sqrt(pow(p2.fi - p1.fi, 2) + pow(p2.se - p1.se, 2));
}

int main(){
    fastio 

    int t;
    cin >> t;
    while(t--) {
        ll s;
        map<ll,ll> mpX;
        map<ll,ll> mpY;
        for(int i = 0; i < 4; i++) {
            ll x, y;
            cin >> x >> y;
            if(mpX[x]) {
                s = euclid({x, mpX[x]}, {x,y});
            }
            if(mpY[y]) {
                s = euclid({mpY[y], y}, {x, y});
            }

            mpX[x] = y;
            mpY[y] = x;
        }
        
        cout << s * s << endl;

    }
    return 0;
}