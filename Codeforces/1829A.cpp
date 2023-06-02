#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
	string s,x="codeforces";
	int res=0,i=0;
	cin >> s;
	for(auto &c : s){
		if(x[i]!=c)
			res++;
		i++;
	}
	cout << res << '\n';
	}
	return 0;
}
