//THE KEY IS TO FIND WHETER GIVEN NUMBER ALREADY EXIST OR NOT
#include <bits/stdc++.h>
#define FOR(i,n) for(i = 0; i < n; i++)
using namespace std;

void solve(){
    int n, i,num, count = 0;
    cin >> n;
    unordered_map<int,int>ans;
    FOR(i,n){
        cin >> num;
        if(ans.count(num) > 0){
            continue;
        }
        ans[num] = 1;
    }   
    cout << ans.size() << endl;
    
    
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }

}
