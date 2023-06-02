#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

void test(){
	unsigned long long tmp1,tmp2;
	int n,m,minA=INT_MAX,minB=INT_MAX,mn=INT_MAX;
	string s;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> m >> s;
		if(s=="00")
			continue;
		if((s=="01")&& (m < minA)){
			minA=m;
		}
		if((s=="10")&& (m < minB)){
			minB=m;
		}
		if((s=="11")&& (m < mn)){
			mn = m;
		}
	}
	if(mn==INT_MAX && (minA==INT_MAX || (minB==INT_MAX))){
		cout << -1 << '\n';
		return;
	}
	tmp1 = minA+minB;
	tmp2 = mn;
	cout << min(tmp1,tmp2) << '\n';
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
