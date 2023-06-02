#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n = 3;
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr, arr+n);

    cout << arr[1] + arr[2] << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
