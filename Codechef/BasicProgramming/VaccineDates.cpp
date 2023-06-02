#include <bits/stdc++.h>

using namespace std;

void solve(){
	int d, l, r;
	cin >> d >> l >> r;
	if(d < l){
		cout << "Too Early" << endl;
		return;
	}
	if(d > r){
		cout << "Too Late" << endl;
		return;
	}
	cout << "Take second dose now" << endl;

}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
