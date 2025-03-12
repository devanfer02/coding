#include <bits/stdc++.h>

using namespace std;


int main(){
    string s;
    cin >> s;
    int len = s.size(),flag = 1;
    if(s[0] != '1'){
        cout << "NO\n";
        return 0;
    }   
    for(int i = 0; i < len; i++){
        if(s.substr(i,3) == "144"){
            i += 2;
            continue;
        }
        if(s.substr(i,2) == "14"){
            i++;
            continue;
        }
        if(s[i] == '1'){
            continue;
        }
        flag = 0;
    }
    cout << (flag ? "YES\n":"NO\n");
    return 0;
}
