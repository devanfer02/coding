#include <bits/stdc++.h>

#define FOR(i,n) for(i = 0; i < n; i++)
#define FOR_REV(i,n) for(i = n - 1; i >= 0; i--)
#define fill(arr,args) memset(arr,args,sizeof(arr));
#define IOS_FALSE ios_base::sync_with_stdio(false); 
#define CIN_NULL cin.tie(NULL);

using namespace std;

void solve(){
    int max = 0,temp;
    int n,s,i,base;
    cin >> n >> s;
    base = s;
    for(i = 0; i <= n ; i++){
        if(s <= n && i + s == base){
            temp = abs(i - s);
            if(max < temp) max = temp;
        }
        s--;
        if(s < 0) break;
    }
    cout << max << endl;
}

int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
