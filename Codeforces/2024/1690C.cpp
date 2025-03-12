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
#define arrIn(arr, size) \
    for(int i=0;i<size;i++) std::cin >> arr[i];

using namespace std;
int main() {
    fastio
    int t,n; 
    int a,b,c;
    cin >> t;
    while(t--) {
        cin >> n;
        ll s[n]={0}, f, tmp=0,res;
        arrIn(s, n);
        for(int i=0;i<n;i++) {
            cin >> f;
            res = s[i] < tmp ? tmp : s[i];
            cout << f-res << " ";
            tmp=f;
        }
        cout << "\n";
    }
    return 0;
}

