#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,a=0,b=0;
	char c;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> c;
		c == '0' ? a++ : b++;
	}
	cout << n - (min(a,b) * 2) << '\n';
	return 0;
}
