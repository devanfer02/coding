#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, mx = 0;
        char c;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> c;
            if(mx < int(c)){
                mx = int(c);
            }
        }
        cout << mx - 96 << "\n";
    }
    return 0;
}
