#include <bits/stdc++.h>

#define FOR(i,n) for(i = 0; i <= n; i++)
#define FOR_REV(i,n) for(i = n - 1; i >= 0; i--)
#define fill(arr,args) memset(arr,args,sizeof(arr));
#define ull unsigned long long
#define IOS_FALSE ios_base::sync_with_stdio(false); 
#define CIN_NULL cin.tie(NULL);

using namespace std;
ull arrs[61];

void scann(){
    arrs[0] = 1;
    for(int i = 1; i < 61; i++){
        i % 2 ? arrs[i] = arrs[i - 1]  * 2 : arrs[i] = arrs[i] = arrs[i - 1] + 1; 
    }
}

void solve(){
    int n;
    cin >> n;
    cout << arrs[n] << endl;
}

int main(){
    IOS_FALSE
    CIN_NULL
    
    scann();
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
