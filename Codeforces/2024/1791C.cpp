#include <bits/stdc++.h>

using namespace std;

void test(){
	int n,l,r,res=0; 
	string s;
	cin >> n >> s;
	l=0,r=n-1;
	for(;s[l]!=s[r] && l<=r;l++,r--){
		res++;
	}
	cout << (n-(res*2)) << '\n';
}

int main(){
	int t;
	cin >> t;
	while(t--)
		test();
	return 0;
}
