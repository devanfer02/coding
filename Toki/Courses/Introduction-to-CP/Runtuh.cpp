#include <bits/stdc++.h>

using namespace std;

int N, M; 
vector<vector<int>> v; // Matrix
int deepest; // Deepest row exploded

void input() {
    for(int i =0 ; i < N; i++) {
        string s;
        cin >> s;
        for(int j = 0; j < M; j++) {
            v[i][j] = s[j] - '0';
        }
    }
}

void debugArr() {
    for(auto &vd: v) {
        for(auto &i :vd) 
            cout << i;
        cout << endl;
    }

}

void moveCell() {
    for(int i = 0; i < M; i++) {

        // Find the deepest row to place new block
        int localDeep = deepest;
        for(int j = deepest + 1; j < N; j++) {
            if (v[j][i] == 1) break;
            localDeep = j;
        }

        // Count how many blocks above the deepest need to be moved
        int counter = 0;
        for(int j = deepest - 1; j >= 0; j--) {
            if (v[j][i] == 1) {
                counter++;
                v[j][i] = 0;
            }
        }

        // Now fill N (counter) blocks from deepest row
        for(int j = localDeep; counter > 0; j--, counter--) {
            v[j][i] = 1;
        } 
    }
}

bool scanFull() {
    bool exists = 0;

    for(int i =0 ; i < N; i++) {

        // Scan if the row full of filled cell
        bool full = 1;
        for(int j =0; j < M; j++) {
            if (v[i][j] == 0) {
                full = 0;
                break;
            }
        }

        // If the row full of filled cell
        // Replace all with empty cell 
        // Mark as EXPLOSIONNNNN
        if (full) {
            exists = 1;
            deepest = i;
            for(int j = 0; j < M; j++) {
                v[i][j] = 0;
            }
        }
    }

    return exists;
}

int main() {

    cin >> N >> M;

    v = vector<vector<int>>(N, vector<int>(M, 0));

    input();

    do {
        if (scanFull()) {
            
            moveCell();
        } else {
            break;
        }
    } while(1);

    

   debugArr(); 

    return 0;
}
