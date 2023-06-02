#include <bits/stdc++.h>

using namespace std;

void solve(){
    int a,b;
    double s,c, pr;
    cin >> s >> a >> b >> c;
    pr = s + (s * (c / 100));
    if(pr >= a && pr <= b) cout << "Yes\n";
    else cout << "No\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
