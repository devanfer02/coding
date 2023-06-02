#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

int main(){
	int a,b,c,t;
	cin >> t;
	while(t--){
		cin >> a >> b >> c;
		cout << (a+b==c?"+\n":"-\n");
	}
	return 0;
}

