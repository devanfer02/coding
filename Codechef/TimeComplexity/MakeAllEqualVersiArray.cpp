#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, i,key, max = 0, counter = 1;
    cin >> n;
    if(n == 1){
        cout << 0 << endl;
        return;
    }
    int arr[n];
    for(i = 0; i < n; i++){
        cin >> arr[i];
    }   
    sort(arr,arr+n);
    for(i = 1; i < n; i++){
        if(arr[i] != arr[i-1]){
            if(max < counter) max = counter;
            counter = 1;
            continue;
        }
        counter++;
        if(i == n - 1 && max < counter) max = counter;
    }
    cout << n - max << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    

    return 0;
}   

