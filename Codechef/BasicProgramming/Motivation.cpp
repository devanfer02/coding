#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, x, i;
    int s, r, crnt = 0;
    cin >> n >> x;
    for(i = 0; i < n; i++){
        cin >> s >> r;
        if(s <= x && crnt < r){
            crnt = r;
        }
    }
    cout << crnt << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
