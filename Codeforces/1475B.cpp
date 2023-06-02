#include <bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define lld long long double
#define ld long double
#define pii pair<int,int>
#define psi pair<string,int>
#define vi vector<int>
#define vpi vector<pair<int,int>>
#define vvi vector<vector<int>>
#define mii map<int,int>
#define FOR(i,n) for(int i = 0; i < n; i++)
#define FOR_REV(i,n) for(int i = n-1; i>=0; i--)
#define log(msg) cout << msg << "\n";
#define debug(symbol, var) cout << symbol << ": " << var << "\n";
#define fastio ios_base::sync_with_stdio(0); cin.tie(NULL);

using namespace std;

map<int,string> ans;

void test(){
    string s;
    int n,z;
    cin >> n;
    if(ans.count(n)){
        cout << ans[n] << '\n';
    }
    if(n < 2020){
        cout << "NO\n";
        return;
    }
    while(n>0){
        s = to_string(n);
        z = s[s.size()-1] - '0';
        if(z || (n % 2020)){
            n -= 2021;
        } else {
            n -= 2020;
        }
    }
    if(!n){
        cout << "YES\n";
        ans[n] = "YES";
        return;
    }
    cout << "NO\n";
    ans[n] = "NO";
}

int main(){
    fastio
    int t;
    cin >> t;
    while(t--)
        test();
    return 0;
}

