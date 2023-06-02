#include <bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define lld long long double
#define pii pair<int,int>
#define psi pair<string,int>
#define vi vector<int>
#define vpi vector<pair<int,int>>
#define vvi vector<vector<int>>
#define mii map<int,int>
#define FOR(i,n) for(int i = 0; i < n; i++)
#define FOR_REV(i,n) for(int i = n-1; i>=0; i--)
#define log(msg) cout << msg << "\n";
#define debug(symbol, var) cout << symbol << ": " << var << "\n";
#define fastio ios_base::sync_with_stdio(0); cin.tie(NULL);

using namespace std;

void test(){
    int n;
    cin >> n;
    ll arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    cout << max((arr[0]*arr[1]),(arr[n-1]*arr[n-2])) << '\n';
}

int main(){
    fastio
    int t;
    cin >> t;
    while(t--){
        test();
    }
    return 0;
}

