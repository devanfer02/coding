#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define FOR(i,n) for(int i = 0; i < n; i++)

using namespace std; 

int main() { 
    fastio
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for(int i = 1; i < n; i++){
        if(arr[i] % arr[0]){
            cout << -1;
            return 0;
        }
    }
    cout << arr[0];
    

    return 0;
}