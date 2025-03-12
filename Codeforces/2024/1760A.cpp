#include <bits/stdc++.h>

#define FOR(i,n) for(i = 0; i < n; i++)
#define FOR_REV(i,n) for(i = n - 1; i >= 0; i--)
#define fill(arr,args) memset(arr,args,sizeof(arr));
#define ull unsigned long long
#define IOS_FALSE ios_base::sync_with_stdio(false); 
#define CIN_NULL cin.tie(NULL);

using namespace std;

void solve(){
    int i;
    int arr[3];
    FOR(i,3){
        cin >> arr[i];
    }
    sort(arr,arr+3);
    cout << arr[1] << endl;
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
