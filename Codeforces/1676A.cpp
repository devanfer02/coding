#include <bits/stdc++.h>

using namespace std;

int con(char c){
    return c - '0';
}

int main(){
    int t;
    string s;
    int suml,sumr;
    cin >> t;
    while(t--){
        cin >> s;
        suml = con(s[0])+con(s[1])+con(s[2]);
        sumr = con(s[3])+con(s[4])+con(s[5]);
        cout << (suml == sumr ? "YES\n":"NO\n");
    }
    return 0;
}
