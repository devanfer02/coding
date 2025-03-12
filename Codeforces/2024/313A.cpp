#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,a,b;
    cin >> n;
    a = n / 10;
    b = (n / 100) * 10 + (n % 10);
    cout << max(n,max(a,b)) << '\n';
    return 0;
}
