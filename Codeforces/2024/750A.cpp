#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k,res = 0;
    cin >> n >> k;
    while(n--){
        if(k + (5 * (res+1)) > 240)
            break;
        res++;
        k += 5 * res;
    }
    cout << res << "\n";
    return 0;
}
