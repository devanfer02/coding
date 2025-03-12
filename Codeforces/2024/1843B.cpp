#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int t,n;
    ll x,a=0,res=0,temp=0;

    cin >> t;
    while(t--) {
        a=0,res=0,temp=0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> x;
            res += abs(x);
            if(x < 0) 
                temp++;
            if(x>0) {
                if (temp) a++;
                temp = 0;
            }
        }
        if (temp) a++;
        cout << res << ' ' << a << endl;

    }
    return 0;
}
