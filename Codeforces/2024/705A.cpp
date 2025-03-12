#include <bits/stdc++.h>

using namespace std;

int main(){
    string res = "";
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        i%2 ? res +="I hate":res += "I love";
        i==n ? res += " it" : res += " that ";
    }
    cout << res << "\n";
    return 0;
}
