#include <bits/stdc++.h>

using namespace std;

int detect(int &num){
    if(num == 1){
        return 2;
    }
    if(num == 7){
        return 3;
    }
    if(num == 4){
        return 4;
    }
    if(num == 2 || num == 3 || num == 5){
        return 5;
    }
    if(num == 0 || num == 6 || num == 9){
        return 6;
    }
    if(num == 8){
        return 7;
    }
    return 0;
}

void solve(){
    int a, b, c, z, res=0;
    cin >> a >> b;
    c = a + b;
    while(c != 0){
        z = c % 10;
        c /= 10;
        res += detect(z);
    }
    cout << res << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}   

