#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(k);
        for(auto &m : v) {
            cin >> m;    
        }
        // basically just move the mouse that is closer to the hole first
        // so we can as many as possible mouse to the hole
        sort(v.begin(), v.end());
        int m = 0, r = k - 1, c = 0;
        while(c < v[r] && m < k) {
            m++;
            c += n - v[r--];
        }
        cout << m << endl;
    }
    return 0;
}