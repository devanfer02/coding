#include <bits/stdc++.h>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std; 

unordered_set<ll> arr;

void fill(){
    for(int i = 0; i < 10001; i++){
        arr.insert(pow(i+1,3));
    }
}

void solve(){
    ll n;
    cin >> n;
    for(auto &i : arr){
        if(arr.count(n - i)){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main() { 
    fastio
    fill();
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}