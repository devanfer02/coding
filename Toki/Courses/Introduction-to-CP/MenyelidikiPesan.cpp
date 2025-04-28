#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; 
    cin >> n;

    vector<string> v(4);

    v[3].resize(n);

    map<char,char> ans;
    map<char,char> usd;

    for(int i = 0 ; i < 3; i++) cin >> v[i];

    for(int i = 0; i < n; i++) {
        if (usd.count(v[0][i]) && usd[v[0][i]] != v[1][i]) {
            cout << "Pak Dengklek bingung";
            return 0;
        }

        if (ans.count(v[1][i]) && ans[v[1][i]] != v[0][i]) {
            cout << "Pak Dengklek bingung";
            return 0;
        }

        ans[v[1][i]] = v[0][i];
        usd[v[0][i]] = v[1][i];
    }

    for(int i = 0; i < n; i++) {
        v[3][i] = ans.count(v[2][i]) ? ans[v[2][i]] : '?';
    }


    cout << v[3] << endl;


    return 0;
}