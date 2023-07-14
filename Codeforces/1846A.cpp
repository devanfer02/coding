#include <bits/stdc++.h>
// header
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define lli long long int
#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int,int>
#define push push_back
#define pop pop_back
#define str string
#define arrIn(arr, size) \
    for(int i=0;i<size;i++) std::cin >> arr[i];

using namespace std;
int main() {
    fastio
    int t,n,k;
    cin >> t;
    while(t--) {
        cin >> n;
        int a,b,ans=0;
        for(int i=0;i<n;i++){
            cin >> a >> b;
            if(a-b>0) ans++;
        }
        cout << ans << '\n';

    }
    return 0;
}

