#include <bits/stdc++.h>

using namespace std;

int main(){
    string s,res="";
    char vow[6] = {'A','O','Y','E','U','I'};
    cin >> s;
    for(auto &c : s){
        bool is=0;
        for(int i = 0; i < 6; i++){
            if(toupper(c) == vow[i]){
                is = 1;
                break;
            }
        }
        if(is)
            continue;
        res += ".";
        res += tolower(c);
    }
    cout << res << "\n";
    return 0;
}
