#include <bits/stdc++.h>
using namespace std; 

void solve(){
    int a,b,n,count = 0;
    cin >> a >> b >> n;
    while(a <= n){
        if(a > b) swap(a,b);
        a += b;
        //cout << a << endl;
        count++;
    }
    cout << count << endl;
}


int main() { 
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}