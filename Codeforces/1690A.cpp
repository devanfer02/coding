#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t,n; 
    int a,b,c;
    cin >> t;
    while(t--) {
        cin >> n;
        a=n/3; c=n/3; b=n-(a+c);
        while(b==a) {b++; a--;}
        while(a<=c) {a++; c--;}
        while(b==a) {b++; a--;}
        cout << a << " " << b << " " << c << "\n";
    }
    return 0;
}

