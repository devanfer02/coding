#include <bits/stdc++.h>

#define FOR(i,n) for(i = 0; i < n; i++)
#define FOR_REV(i,n) for(i = n - 1; i >= 0; i--)
#define fill(arr,args) memset(arr,args,sizeof(arr));
#define IOS_FALSE ios_base::sync_with_stdio(false); 
#define CIN_NULL cin.tie(NULL);

using namespace std;

void solve(){
    int n,a,b,c;
    cin >> n >> a >> b >> c;

    if(b < n){
        cout << "NO" << endl;
        return;
    }
    if((a >= n || c >= n)){
        cout << "YES" << endl;
        return;
    }
    a += c;
    if(a >= n){
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
}

int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
