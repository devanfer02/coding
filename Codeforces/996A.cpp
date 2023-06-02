#include <bits/stdc++.h>

using namespace std;

int main(){
	int ar[5] = {1,5,10,20,100};
	int n,i = 4,c = 0;
	cin >> n;
	while(n){
		while(ar[i] > n) i--;
		n -= ar[i];
		c++;
	}
	cout << c << "\n";
	return 0;
}