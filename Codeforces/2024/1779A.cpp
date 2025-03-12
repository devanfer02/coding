#include <bits/stdc++.h>

#define FOR(i,n) for(i = 0; i < n; i++)
#define FOR_REV(i,n) for(i = n - 1; i >= 0; i--)
#define fill(arr,args) memset(arr,args,sizeof(arr));
#define IOS_FALSE ios_base::sync_with_stdio(false); 
#define CIN_NULL cin.tie(NULL);
#define ull unsigned long long 

using namespace std;

void solve(){
    string s;
    int n,i;
    cin >> n >> s;
    if(s.find('R') == string::npos){
        cout << -1 << endl;
        return;
    }
    if(s.find('L') == string::npos){
        cout << -1 << endl;
        return;
    }
    int l = s.find_last_of('L');
    int r = s.find('R');
    if(r < n/2 && l >= n/2){
        cout << 0 << endl;
        return;
    }
    if(s[r - 1] == 'L'){
        cout << r << endl;
        return;
    }
    for(i = 1; i < n; i++){
        if(s[i] == 'R' && s[i-1]== 'L'){
            cout << i << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main(){
    IOS_FALSE
    CIN_NULL
    
    int t;
    cin >>t;
    while(t--){
        solve();
    }
    

    return 0;
}