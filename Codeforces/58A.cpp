#include <bits/stdc++.h>

using namespace std;

int main(){
    char c[5] = {'h','e','l','l','o'};
    int j = 0;
    string s;
    cin >> s;
    for(auto &i : s){
        if(i == c[j]){
            j++;
        }
        if(j >= 5) break;
    }
    cout << (j >= 5 ? "YES\n" : "NO\n");
    return 0;
}
