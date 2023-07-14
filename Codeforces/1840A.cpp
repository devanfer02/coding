#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int t,n; bool f;
    char c,r;
    cin >> t;
    while(t--) {
        f = 0;
        cin >> n;
        for(int i=0;i<n;i++) {
            cin >> c;
            if(!f) {
                r = c;
                f=1;
                continue;
            }
            if(r == c) {
                cout << r;
                f=0;
            }
        }
        cout << endl;
    }
    return 0;
}

