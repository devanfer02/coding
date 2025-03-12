#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);
using namespace std;

int main(){
	fastio
	string s;
	int t,res,len;
	cin >> t;
	while(t--){
		cin >> s;
		res=0; len = s.size();
		if(s[0]=='_'||(s[0]=='^'&&len==1)) res++;
		if(s[len-1]=='_')res++;
		for(int i=0;i<len-1;i++){
			if(s[i] =='_' && s[i+1]!='^')
				res++;
		}
		cout << res << '\n';

	}
	return 0;
}
