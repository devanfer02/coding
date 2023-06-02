#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

int n,m;

bool solve(int n,int m){
	if(n==m) return 1;
	if(n%3) return 0;
	return (solve(n/3,m) || solve(2*n/3,m));
}

void test(){
	cin >> n >> m;
	cout << (solve(n,m) ? "YES\n":"NO\n");
}

int main(){
	fastio
	int t;
	cin >> t;
	while(t--){
		test();
	}
	return 0;
}
