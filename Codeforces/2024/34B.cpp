#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m,mx=0;
	cin >> n >> m;
	int arr[n];
	for(int i=0; i<n;i++){
		cin >> arr[i];
	}
	sort(arr,arr+n);
	for(int i=0; i <m;i++){
		mx = min((arr[i]+mx),mx);
	}
	cout << abs(mx) << '\n';
	return 0;
}
