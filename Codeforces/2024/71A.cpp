#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    string s;
    cin >> t;
    for(;t--;){
        cin >> s;
        if(s.size() <= 10){
            cout << s << "\n";
            continue;
        }
        cout << s[0] << s.size()-2 << s[s.size()-1] << "\n";
    }
    return 0;
}
