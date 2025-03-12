#include <bits/stdc++.h>

using namespace std;

int main(){
	int k,c=0,arr[12];
	cin >> k;
	for(int i=0;i<12;i++){
		cin >> arr[i];
	}
	sort(arr,arr+12,greater<int>());
	for(int i=0;i<12&&k>0;i++){
 		k -= arr[i]; c++;
	}
	cout << (k<=0? c : -1) << "\n";
	return 0;
}
