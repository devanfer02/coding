#include <bits/stdc++.h>
using namespace std; 

void solve(){
    string tmp = "YES";
    string s;
    int i = 0;
    cin >> s;
    for(char &c : s) {
        if(toupper(c) != tmp[i]){
            cout << "NO\n";
            return;
        }
        i++;
    }
    cout << "YES\n";
    
}


int main() { 
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}