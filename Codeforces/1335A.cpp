#include <bits/stdc++.h>
#define ld long double
#define ll long long
using namespace std;
 
int main(){	
    int t; cin>>t;
    ld n; ll a,b;
    while(t--){
	cin >> n;b=n;
	a = (n<=2?0:b%2?floor(n/2):floor(n/2)-1);
	cout << a << '\n';
    }
    return 0;
}
