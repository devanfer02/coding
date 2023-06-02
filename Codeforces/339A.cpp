#include <bits/stdc++.h>

using namespace std;

int main(){
    string s,res = "";
    cin >> s;
    int len = s.size(),j=1;
    if(len == 1){
        cout << s << "\n";
        return 0;
    }
    int A[4] = {0};
    for(int i = 0; i < len; i += 2){
        A[s[i] - '0']++;
    }
    while(j < 4){
        while(A[j]){
            res += to_string(j) + "+";
            A[j]--;
        }
        j++;
    }
    res.erase(res.size()-1,1);
    cout << res << "\n";
    return 0;
}
