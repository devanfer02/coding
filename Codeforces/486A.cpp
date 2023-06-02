#include <bits/stdc++.h>
#define lld long double
#define lli long long int
using namespace std;
 
int main(){	
    lld n; lli a;
    cin >> a;n=a;
    a = ((ceil(n/2) * (a%2?-1:1)));
    cout << a << '\n';
    return 0;
}
