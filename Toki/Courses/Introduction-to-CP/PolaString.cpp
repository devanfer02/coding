#include <bits/stdc++.h>

using namespace std;

int main() {
    string s; 
    cin >> s; 

    int N = ceil(sqrt(double(s.size())));

    vector<vector<char>> v(N, vector<char>(N, '.'));

    for (int i = 0; i < s.size(); i++) {
        int row = int(floor(i/double(N)));
        if (row & 1) {
            v[row][N - (i % N) - 1] = s[i];            
        } else {
            v[row][i % N] = s[i];
        }
    }

    for (auto &cc : v) {
        for (auto &c : cc) {
            cout << c << "";
        }
        cout << endl;
    }


    return 0;
}
