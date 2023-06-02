//Not really mine
#include <bits/stdc++.h>

#define FOR(i,n) for(i = 0; i <= n; i++)
#define FOR_REV(i,n) for(i = n - 1; i >= 0; i--)
#define fill(arr,args) memset(arr,args,sizeof(arr));
#define ull unsigned long long
#define IOS_FALSE ios_base::sync_with_stdio(false); 
#define CIN_NULL cin.tie(NULL);

using namespace std;

void solve(){
    int n;
    cin >> n;
    // cout << ((int) pow(2, (n + 3) / 2)) + (((int) pow(-1, n)) - 3) / 2 << endl;
    cout << (int)pow(2, ((n + (n%2))/2) + 1) - (1 + (n%2)) << endl;
}

int main(){
    IOS_FALSE
    CIN_NULL
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
