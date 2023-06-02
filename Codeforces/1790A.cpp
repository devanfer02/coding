#include <bits/stdc++.h>

#define FOR(i,n) for(i = 0; i < n; i++)
#define FOR_REV(i,n) for(i = n - 1; i >= 0; i--)
#define fill(arr,args) memset(arr,args,sizeof(arr));
#define ull unsigned long long
#define IOS_FALSE ios_base::sync_with_stdio(false); 
#define CIN_NULL cin.tie(NULL);

using namespace std;

static string pi = "3141592653589793238462643383279";

void solve(){
    int i,n, count = 0;
    string s;
    cin >> s;
    n = s.length();
    FOR(i,n){
        if(s[i] != pi[i]){
            break;
        }
        count++;
    }
    cout << count << endl;
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
