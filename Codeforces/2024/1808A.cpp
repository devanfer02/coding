#include <bits/stdc++.h>

using namespace std;

int mod(int n){
	if(n < 10) return 0;
	int z,a=INT_MIN,b=INT_MAX;
	while(n){
		z = n%10;
		n /= 10;
		a = max(a,z);
		b = min(b,z);
	}
	return abs(a-b);
}

int main(){
	int t,l,r,res,mx=-1,tmp;
	cin >> t;
	while(t--){
		mx=-1;
		cin >> l >> r;
		while(l <= r){
			tmp = mod(l);
			if(mx < tmp)res=l,mx=tmp;
			if(mx==9)break;
			l++;
		}
		cout << res << '\n';
	}
	return 0;
}
