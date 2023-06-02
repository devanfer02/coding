#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int n,m,mn=INT_MAX;
	cin >> n >> m;
	int arr[m];
	for(int i=0;i<m;i++){
		cin >> arr[i];
	}
	sort(arr,arr+m);
	for(int i=0;i<=m-n;i++){
		mn = min(arr[i+(n-1)]-arr[i],mn);
	}
	cout << mn << endl;

	return 0;
}

