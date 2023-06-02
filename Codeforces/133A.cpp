#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    for(auto &c : s){
        if(c == 'H' || c == 'Q' || c == '9'){
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}
