#include <bits/stdc++.h>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std; 

void solve(){
    int arr[1001];
    int n,m,num,res = 0;
    memset(arr,0,sizeof(arr));
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> num;
        arr[num]++;
    }
    for(int i = 0; i < m; i++){
        cin >> num;
        if(arr[num]) res = num;
    }
    if(res){
        cout << "YES\n";
        cout << 1 << " " << res << "\n";
    } else {
        cout << "NO\n";
    }
}

int main() { 
    fastio
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}