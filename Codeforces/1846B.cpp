#include <bits/stdc++.h>
// header
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define lli long long int
#define vi vector<int>
#define vvi vector<vector<int>>
#define vc vector<char>
#define vvc vector<vector<char>>
#define pii pair<int,int>
#define push push_back
#define pop pop_back
#define str string
#define arrIn(arr, size) \
    for(int i=0;i<size;i++) std::cin >> arr[i];

using namespace std;

vvc v;
void check(){
    char arr[3] = {'X','O','+'};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if((v[i][0]==v[i][1])&&(v[i][1]==v[i][2])&&(v[i][0]==arr[j])){
                cout << arr[j] << '\n'; return;
            }
            if((v[0][i]==v[1][i])&&(v[1][i]==v[2][i])&&(v[0][i]==arr[j])){
                cout << arr[j] << '\n'; return;
            }
        }
        if((v[0][0]==v[1][1])&&(v[1][1]==v[2][2])&&(v[0][0]==arr[i])){
            cout << arr[i] << '\n'; return;
        }
        if((v[2][0]==v[1][1])&&(v[1][1]==v[0][2])&&(v[2][0]==arr[i])){
            cout << arr[i] << '\n'; return;
        }
    }
    
    cout << "DRAW" << endl;
}

int main() {
    fastio
    int t,n,k;
    cin >> t;
    while(t--) {
        v = vvc(3,vc(3));
        for(auto &i : v){
            for(auto &j : i){
                cin >> j;
            }
        }
        check();


    }
    return 0;
}

