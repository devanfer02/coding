#include <bits/stdc++.h>

using namespace std;

void solve(){
    int x,y;
    cin >> x >> y;
    if(x > y) {
        cout << 0 << endl;
        return;
    }
    if(!(y%x)){
        cout << y / x << endl;
        return;
    }
    while(y % x){
        y--;
    }
    cout << y / x << endl;
}
int main() {
	int t;
	cin >> t;
	while(t--){
	    solve();
	}
	return 0;
}
