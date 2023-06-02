#include <bits/stdc++.h>

#define FOR(i,n) for(i = 0; i < n; i++)
#define FOR_REV(i,n) for(i = n - 1; i >= 0; i--)
#define fill(arr,args) memset(arr,args,sizeof(arr));
#define ull unsigned long long
#define IOS_FALSE ios_base::sync_with_stdio(false); 
#define CIN_NULL cin.tie(NULL);

using namespace std;

void solve(){
    int n,i,max1,max2;
    cin >> n;
    int arr[n];
    
    FOR(i,n){
        cin >> arr[i];
    }
    int ar[n];
    memcpy(ar,arr,sizeof(arr));
    sort(arr,arr+n);
    max1 = arr[n - 1];
    max2 = arr[n - 2];
    FOR(i,n){
        ar[i] == max1 ? cout << ar[i] - max2 << " ": cout << ar[i] - max1 << " ";
    }
    cout << "\n";
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
