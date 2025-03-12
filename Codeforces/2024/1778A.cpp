#include <bits/stdc++.h>

#define FOR(i,n) for(i = 0; i < n; i++)
#define FOR_REV(i,n) for(i = n - 1; i >= 0; i--)
#define fill(arr,args) memset(arr,args,sizeof(arr));
#define IOS_FALSE ios_base::sync_with_stdio(false); 
#define CIN_NULL cin.tie(NULL);
#define ull unsigned long long
#define ll long long

using namespace std;

void solve(){
    int i,n,count = 0,sum = 0;
    cin >> n;
    int arr[n];
    int minus[n];
    memset(minus,0,sizeof(minus));
    FOR(i,n){
        cin >> arr[i];
        if(arr[i] == -1) {
            minus[count] = i;
            count++;
        }
        sum += arr[i];
    }
    if(!count){
        cout << sum - 4 << endl;
        return;
    }
    if(count == 1){
        cout << sum << endl;
        return;
    }
    FOR(i,count){
        if(abs(minus[i]-minus[i+1]) == 1){
            cout << sum + 4 << endl;
            return;
        }
    }
    cout << sum << endl;
    
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
