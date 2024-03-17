#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        ll a, b;
        cin >> a >> b;
        
        if(a==b) {
            cout << (a+b)*(a+b) << endl;
            continue;
        } 
        ll s1 = min(a,b);
        ll s2 = max(a,b);

        if(s1+s1 >= s2) {
            cout << (s1+s1)*(s1+s1) << endl;
            
        } else {
            cout << s2 * s2 << endl;
        }
        

    }
    return 0;
}