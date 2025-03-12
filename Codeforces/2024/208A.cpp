#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	string s,res=""; int n;
	getline(cin,s);
	n = s.size();
	for(int i = 0; i < n; i++) {	
		if(s.substr(i,3)=="WUB") {
			cout << (res==""?res:res+" ");
			i+=2; res = "";
			continue;
		}
		res += s[i];
		if(i==n-1) cout << res << endl;
	}

	return 0;
}

