#include <bits/stdc++.h>

using namespace std;

void solve(){
    int a,b;
    cin >> a >> b;

    int c,d, ans = 0;    
    cin >> c >> d;
    if((a == c || a == d) && (b == c || b == d)){
        ans = 1;
    }
    cin >> c >> d;
    if((a == c || a == d) && (b == c || b == d)){
        ans = 2;
    }
    cout << ans << endl;  
}   

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
}
