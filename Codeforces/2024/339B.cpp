#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ll n,m ;

    cin >> n >> m;

    ll sum = 0, l=1, x;
    for(int i =0; i < m; i++) {
        cin >> x;
        if(l > x) {
            sum += abs(n - l) + 1;
            l = 1;
        }
        sum += abs(x - l);
        l = x;
    }
    cout << sum;
    // 14
    return 0;
}