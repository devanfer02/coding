#include <bits/stdc++.h>

using namespace std;

void solve(){
	int year = 0;
	int a, b, c;
	cin >> a >> b >> c;
	while(a < b){
		a += c;
		year++;
	}
	cout << year << endl;
}


int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
