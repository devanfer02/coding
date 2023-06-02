#include <bits/stdc++.h>

using namespace std;

void solve(){
    int a,z, count = 0;
    cin >> a;
    while(a != 0){
        z = a % 10;
        a /= 10;
        if(z == 4) count++;
    }
    cout << count << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}   

