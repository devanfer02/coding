#include <bits/stdc++.h>
#define fi first 
#define se second
#define pb push_back
#define FOR(i,s,e) for(int i=s;i<e;i++)
#define FOREV(i,s,e) for(int i=s; i>=e;i--)
#define in(var) cin >> var;
#define ps(x) cout << x << " ";
#define pss(x) cout << x << '\n';
#define arrin(arr, n) for(int i = 0; i < n; i++) cin >> arr[i];
#define arr2din(arr, n, m) for(int i = 0; i < n; i++) \
    for(int j = 0; j < m; j++) cin >> arr[i][j];
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<long long> vll;
typedef vector<vector<char>> vvc;
typedef vector<vector<int>> vvi;

int main(){
    fastio

    int t;
    cin >> t;
    while(t--) {
        double n; cin >> n;
        // cout << "TEST: " << n << endl;
        for(int k = 2; k <= n; k++) {
            // Mersenne numbers
            // So it was like 

            // we know that
            /*
            x + 2x + 2k-1x = n
            x(1 + 2 + 2k-1) = n -- the term in paranthese can be summed as 2k - 1 or m(k)
            x*m(k) = n
            x = n / m(k)
            */
            int x = pow(2,k)-1;
            if((int)n%x==0) {
                cout << int(n/x) << endl;
                // cout << "X: "<< (int)x << endl;
                // cout << "K: " << k << endl;
                break ;
            }
        }
    }

    return 0;
}
