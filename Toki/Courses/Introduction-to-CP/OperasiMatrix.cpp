#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, x;
    cin >> n >> m >> x;

    vector<vector<int>> v(100, vector<int>(100, 0));
    for(int i =0 ; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> v[i][j];
        }
    }

    while(x--) {
        string c; cin >> c;
        
        if (c == "|" || c == "_") {
            
            int ot = c == "|" ? n : n / 2; 
            int in = c == "|" ? m / 2 : m;

            for(int i = 0; i < ot; i++) {
                for(int j = 0; j < in; j++) {
                    swap(
                        v[i][j], 
                        v[c == "|" ? i : n-i-1][c == "|" ? m- j - 1 : j]
                    );
                }
            }
            continue;
        }

        int st = stoi(c);

        vector<vector<int>> v2 = v;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if (c == "90") 
                    v2[j][n-i-1] = v[i][j];
                if (c == "180")
                    v2[n-i-1][m-j-1] = v[i][j]; 
                if (c == "270")
                    v2[m-j-1][i] = v[i][j];
            }
        }

        if (st / 90 & 1) {
            swap(n,m);
        }

        v = v2;
    }

    for(int i =0 ; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
