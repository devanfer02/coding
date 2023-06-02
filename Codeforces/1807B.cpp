#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

int main(){
	fastio
	int t,n,m=0,b=0;
	vector<int> arr;
	cin >> t;
	while(t--){
		m=0;b=0;
		cin >> n;
		arr.assign(n,0);
		for(auto &i:arr){
			cin >> i;
			i%2?b+=i:m+=i;
		}
		cout << (m>b?"YES\n":"NO\n");
	}
	return 0;
}

