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
    str s;
    cin >> t;
    while(t--) {
        cin >> n >> k >> s;
        int mn,tmp,w=0; bool wl;
        for(int i=0;i <n;i++) {
            if(s[i]=='W') w++;
            if(i+1>=k) {
                mn = tmp = w; ++i;
                for(int j=1;i<n;i++,j++) {
                    wl = s[j-1]=='W';
                    if(wl) tmp--;
                    if(s[i]=='W') tmp++;
                    mn=min(tmp,mn);
                }
            }
        }
        cout << mn << endl;
        
    }
    return 0;
}

